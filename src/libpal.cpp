/*
** ███████████████████████████████████
** █▄─▄███▄─▄█▄─▄─▀█▄─▄▄─██▀▄─██▄─▄███
** ██─██▀██─███─▄─▀██─▄▄▄██─▀─███─██▀█
** ▀▄▄▄▄▄▀▄▄▄▀▄▄▄▄▀▀▄▄▄▀▀▀▄▄▀▄▄▀▄▄▄▄▄▀
*/
#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <unistd.h>
#include <antlr4-runtime.h>

#include <gfc.h>

#include "PALLexer.h"
#include "PALParser.h"
#include "libpal.hpp"

using namespace antlr4;
using namespace std;
using namespace pal;

namespace pal 
{
	
class Program::Impl 
{
	
public:
	
	InstructionHandler* handler;
	
};
	
};

void
pal::InstructionHandler::handleOnWait(int duration, const char* timeunit)
{
	if (duration <= 0) return;
	if (strcmp(timeunit, "s") == 0) 
		sleep(duration);
	else if (strcmp(timeunit, "m"))
		sleep(duration * 60);
}

pal::Program::Program(InstructionHandler* handler)
{ 
	pimpl = std::make_unique<Program::Impl>();
	pimpl->handler = handler;
}

pal::Program::~Program(void) 
{ 
	Program::Impl* res = pimpl.release();
	delete res;
}

void
pal::Program::Evaluate(const char* filepath)
{
	gfc_string_p content = NULL;
	gfc_fs_read(filepath, &content);
	
	Evaluate(content->buffer, gfc_string_length(content));
		
	gfc_string_free(content);
}

void
pal::Program::Evaluate(const char* content, int length)
{
	std::string source(content);
	
	ANTLRInputStream input(source);
	PALLexer lexer(&input);
	CommonTokenStream tokens(&lexer);
	tokens.fill();
	
	pal::PALParser parser(&tokens);
	
	PALParser::Pal_programContext* ctx = parser.pal_program();
	
	for (auto& ctx_stmt : ctx->pal_statement())
	{
		if (ctx_stmt->pal_click() != NULL)
		{
			PALParser::Pal_targetContext* ctx_target = ctx_stmt->pal_click()->pal_target();
			string path;
			int x = -1;
			int y = -1;
			bool required = false;
			if (ctx_target->path != NULL)
			{
				path = ctx_target->path->getText();
				path = path.substr(1, path.length() - 2);
				required = ctx_target->PAL_REQUIRED() != NULL;
			}
			if (ctx_stmt->pal_click()->found != NULL)
			{
				path = ctx_stmt->pal_click()->found->getText();
				path = path.substr(1, path.length() - 2);
				required = true;
			}
			x = atoi(ctx_target->x->getText().data());
			y = atoi(ctx_target->y->getText().data());			
			pimpl->handler->handleOnClick(x, 
																		y, 
																		path == "" ? NULL : path.data(), 
																		required, 
																		ctx_stmt->pal_click()->found == NULL);
		}
		else if (ctx_stmt->pal_move() != NULL)
		{
			PALParser::Pal_targetContext* ctx_target = ctx_stmt->pal_move()->pal_target();
			string path;
			int x = -1;
			int y = -1;

			if (ctx_target->path != NULL)
			{
				path = ctx_target->path->getText();
				path = path.substr(1, path.length() - 2);
			}
			x = atoi(ctx_target->x->getText().data());
			y = atoi(ctx_target->y->getText().data());			
			pimpl->handler->handleOnMove(x, y, path == "" ? NULL : path.data());
		}
		else if (ctx_stmt->pal_scroll() != NULL)
		{
			string found;
			if (ctx_stmt->pal_scroll()->found != NULL) 
			{
				found = ctx_stmt->pal_scroll()->found->getText();
				found = found.substr(1, found.length() - 2); 
			}
			string direction;
			if (ctx_stmt->pal_scroll()->pal_direction() != NULL) 
				direction = ctx_stmt->pal_scroll()->pal_direction()->getText();
			else
				direction = "+";
			int offset = atoi(ctx_stmt->pal_scroll()->offset->getText().data());
			pimpl->handler->handleOnScroll(offset, direction.data(), found == "" ? NULL : found.data());
		}
		else if (ctx_stmt->pal_paste() != NULL)
		{
			string str = ctx_stmt->pal_paste()->content->getText();
			string text = str.substr(1, str.length() - 2);
			pimpl->handler->handleOnPaste(text.data());
		}
		else if (ctx_stmt->pal_wait() != NULL)
		{
			int duration = atoi(ctx_stmt->pal_wait()->duration->getText().data());
			string timeunit = ctx_stmt->pal_wait()->pal_timeunit()->getText();
			pimpl->handler->handleOnWait(duration, timeunit.data());
		}
		else if (ctx_stmt->pal_save() != NULL) 
		{
			string path = ctx_stmt->pal_save()->path->getText();
			path = path.substr(1, path.length() - 2);
			pimpl->handler->handleOnSave(path.data());
		}
		else if (ctx_stmt->pal_enter() != NULL) 
		{
			pimpl->handler->handleOnEnter();
		}
		else if (ctx_stmt->pal_plugin() != NULL) 
		{

		}
	}
}