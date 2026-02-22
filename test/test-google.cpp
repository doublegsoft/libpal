/*
** ███████████████████████████████████
** █▄─▄███▄─▄█▄─▄─▀█▄─▄▄─██▀▄─██▄─▄███
** ██─██▀██─███─▄─▀██─▄▄▄██─▀─███─██▀█
** ▀▄▄▄▄▄▀▄▄▄▀▄▄▄▄▀▀▄▄▄▀▀▀▄▄▀▄▄▀▄▄▄▄▄▀
*/
#include <stdio.h>
#include <gfc.h>

#include "libpal.hpp"

#define PAL_ROOT_DIR						"../../test/pal"

class PrintHandler : public pal::InstructionHandler
{
	
public:
	
void handleOnClick(int x, int y, const char* path, bool required, bool relative) override
{
	if (path != NULL)
		printf("click %s (%d, %d)\n", path, x, y);
	else
		printf("click (%d, %d)\n", x, y);
}
	
void handleOnMove(int x, int y, const char* path) override
{
	if (path != NULL)
		printf("move %s (%d, %d)\n", path, x, y);
	else
		printf("move (%d, %d)\n", x, y);

}
	
void handleOnScroll(int offset, const char* direction, const char* path) override
{
	if (path == NULL)
		printf("scroll %s %d\n", direction, offset);
	else
		printf("scroll %s %d %s\n", direction, offset, path);
}
	
void handleOnWait(int duration, const char* timeunit) override
{
	printf("wait %d%s\n", duration, timeunit);
}
	
void handleOnSave(const char* path) override
{
	printf("save %s\n", path);
}
	
void handleOnPaste(const char* text) override
{
	printf("paste %s\n", text);
}
	
void handleOnEnter() override
{
  printf("enter\n");
}
  
void handleOnRemove(const char* path) override
{
  printf("remove first file under %s\n", path);
}
	
}; 

int 
main(int argc, char* argv[])
{
	gfc_gc_init();
		
  PrintHandler handler;
  pal::Program prog(&handler);
  prog.Evaluate(PAL_ROOT_DIR "/test-google.pal");

	return 0;
}

