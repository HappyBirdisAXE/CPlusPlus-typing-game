#include "timer.h"
#include <chrono>

static double Time::Timer() 
{
  auto start = std::chrono::steady_clock::now();
  start = std::chrono::duration_cast<std::chrono::milliseconds>(start)
  return start;
}

