#include "menu.hpp"

#include <iostream>
#include <string>

void PrintMenu()
{
  std::cout << 
      "======================\n" <<
      "     Typing Game      \n" <<
      "1.    Easy Mode(10)       \n" <<
      "2.  Standard Mode(25)     \n" <<
      "3.    Hard Mode(50)       \n" <<
      "======================\n" <<
      "Pick A Mode: ";
}

const std::string PrintTime(int TotalTimeSeconds, int TotalTimeMilliseconds)
{
  int Minutes = 00;
  int Seconds = 00;
  int Milliseconds = 00;

  Milliseconds = (TotalTimeMilliseconds % 100);
  Seconds = (TotalTimeSeconds % 100);
  Minutes = (Seconds / 60);

  if(Seconds >= 60)
    Seconds -= 60;
  
  const std::string Time = std::to_string(Minutes) + ":" + std::to_string(Seconds) + ":" + std::to_string(Milliseconds);

  return Time;
}