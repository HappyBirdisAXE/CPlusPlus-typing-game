#ifndef WORDS_H
#define WORDS_H
#include <string>
#include <random>

class Word 
{
public:
static std::string GenerateWord()
{
  std::default_random_engine Generate;
  std::uniform_int_distribution<int> dist(0,29);
  int IndexNumber = dist(Generate);
  Word word;
  
  std::string PickedWord = word.Words[IndexNumber];
  return PickedWord;
}
private:
std::string Words[30] = 
{
"Pop", "Dance", "Music", "Happy", "Sad", "Hair", "Discord", "Power", "Keyboard", "Freddy", "Blocked"
"Gears", "Replit", "Programming", "Typing", "Jump", "Rewind", "Jumpscare", "Monster", "Food", "Game", "Rewind", 
"Popular", "Winner", "Loser", "Storage", "Cookies", "Ten", "Matte", "Makeup", "Github"
};
};
#endif