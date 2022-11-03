#include <chrono>
#include <iostream>
#include <string>
#include <thread>

#include "menu.h""
#include "words.h"

using namespace std;

int main() {
  bool Correct = false;
  bool GameOver = false;

  int TimePassed = 0;
  int TotalTime = 0;
  int WordCount = 0;
  int WordMax;
  int Option;

  const int EasyWordCount = 10;
  const int MediumWordCount = 25;
  const int HardWordCount = 50;

  string Word = "";
  string CorrectWord = "";

  PrintMenu();
    cin >> Option;

    switch(Option)
      {
        case 1:
          WordMax = EasyWordCount;
        break;
        case 2:
          WordMax = MediumWordCount;
        break;
        case 3:
          WordMax = HardWordCount;
        break;
        default:
          Word = MediumWordCount;
        break;
      }
  
  cout << "Starting game, be ready...";
  std::this_thread::sleep_for(3s);
  
  do {
    Correct = false;
    Word = "";
    CorrectWord = Word::GenerateWord();

    system("clear");
    

    auto Start = chrono::steady_clock::now();

    do {
      cout << CorrectWord << endl;
      cout << "Enter Word: ";
      cin >> Word;

      if (CorrectWord == Word) {
        Correct = true;
      }
    } while (!(Correct));

    auto End = chrono::steady_clock::now();
    chrono::duration<double> Duration = Start - End;
    TimePassed =
        (chrono::duration_cast<chrono::milliseconds>(Duration).count() * -1);

    cout << "Milliseconds passed: " << TimePassed << endl;

    TotalTime += TimePassed;

    WordCount++;
    if (WordCount == EasyWordCount)
      GameOver = true;

  } while (!(GameOver));
}