#include "words.hpp"

#include <string>
#include <random>

std::string Word::GenerateWord()
{
  std::random_device Random;
  std::mt19937 Generator(Random());
  std::uniform_int_distribution<int> Dist(0,);
  int IndexNumber = Dist(Generator);
  Word word;
  
  std::string PickedWord = word.Words[IndexNumber];
  return PickedWord;
}