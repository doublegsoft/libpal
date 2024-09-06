/*
** ███████████████████████████████████
** █▄─▄███▄─▄█▄─▄─▀█▄─▄▄─██▀▄─██▄─▄███
** ██─██▀██─███─▄─▀██─▄▄▄██─▀─███─██▀█
** ▀▄▄▄▄▄▀▄▄▄▀▄▄▄▄▀▀▄▄▄▀▀▀▄▄▀▄▄▀▄▄▄▄▄▀
*/
#pragma once

#include <memory>

namespace pal
{
  
  
class InstructionHandler 
{
  
public:
  
virtual void handleOnClick(int x, int y, const char* path, bool required, bool relative) = 0;

virtual void handleOnMove(int x, int y, const char* path) = 0;

virtual void handleOnScroll(int offset, const char* direction, const char* path) = 0;

virtual void handleOnSave(const char* path) = 0;

virtual void handleOnPaste(const char* text) = 0;

virtual void handleOnEnter(void) = 0; 

virtual void handleOnWait(int duration, const char* timeunit);
  
};  

class Program 
{

public:

Program(InstructionHandler* handler);

~Program(void);

/*!
**
*/
void Evaluate(const char* filepath); 

void Evaluate(const char* content, int length); 

private:
  class Impl;
  std::unique_ptr<Impl> pimpl;
};
  
};
