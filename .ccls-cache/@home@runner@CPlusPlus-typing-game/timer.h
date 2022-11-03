#ifndef TIMER_H
#define TIMER_H
#include <chrono>
class Time
{
  private:
  int TotalTime = 0;

  public:
  static int Timer() 
  {
    auto Start = std::chrono::steady_clock::now();
    auto End = std::chrono::steady_clock::now();
    std::chrono::duration<double> Duration = (Start - End);
    auto TimePassed = std::chrono::duration_cast<std::chrono::seconds>(Duration).count();
    return TimePassed;
  }

  void AddTime(int TimePassed)
  {
    this->TotalTime += TimePassed;
  }

  int PrintTotalTime() {return this->TotalTime;}
};
#endif