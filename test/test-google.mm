/*
** ███████████████████████████████████
** █▄─▄███▄─▄█▄─▄─▀█▄─▄▄─██▀▄─██▄─▄███
** ██─██▀██─███─▄─▀██─▄▄▄██─▀─███─██▀█
** ▀▄▄▄▄▄▀▄▄▄▀▄▄▄▄▀▀▄▄▄▀▀▀▄▄▀▄▄▀▄▄▄▄▄▀
*/
#include <Foundation/Foundation.h>

#include <gfc.h>

#include "libpal.hpp"

#define PAL_ROOT_DIR						"../../test/pal"

class PrintHandler : public pal::InstructionHandler
{
	
public:
	
void handleOnClick(int x, int y, const char* path, bool required, bool relative) override
{
	if (path != NULL)
		NSLog(@"click %s (%d, %d)", path, x, y);
	else
		NSLog(@"click (%d, %d)", x, y);
}
	
void handleOnMove(int x, int y, const char* path) override
{
	if (path != NULL)
		NSLog(@"move %s (%d, %d)", path, x, y);
	else
		NSLog(@"move (%d, %d)", x, y);

}
	
void handleOnScroll(int offset, const char* direction, const char* path) override
{
	if (path == NULL)
		NSLog(@"scroll %s %d", direction, offset);
	else
		NSLog(@"scroll %s %d %s", direction, offset, path);
}
	
void handleOnWait(int duration, const char* timeunit) override
{
	NSLog(@"wait %d%s", duration, timeunit);
}
	
void handleOnSave(const char* path) override
{
	NSLog(@"save %s", path);
}
	
void handleOnPaste(const char* text) override
{
	NSLog(@"paste %s", text);
}
	
void handleOnEnter() override
{
	
}
	
}; 

int 
main(int argc, char* argv[])
{
	@autoreleasepool {
		gfc_gc_init();
		
		PrintHandler handler;
		pal::Program prog(&handler);
		prog.Evaluate(PAL_ROOT_DIR "/test-google.pal");
	}
	
	return 0;
}

