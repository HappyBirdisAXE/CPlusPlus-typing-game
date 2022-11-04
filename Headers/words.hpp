#ifndef WORDS_H
#define WORDS_H
#include <string>
#include <random>

class Word 
{
public:
static std::string GenerateWord();
private:
std::string Words[80] = 
{
"Drawer", "Dance", "Music", "Happy", "Sad", "Hair", "Discord", "Power", "Keyboard", "Pawn", "Blocked",
"Gears", "Replit", "Programming", "Typing", "Jump", "Rewind", "Jumpscare", "Monster", "Food", "Game", "Rewind", 
"Popular", "Winner", "Loser", "Storage", "Cookies", "Ten", "Matte", "Makeup", "Github", "Plants", "Computer", "Blocks",
"Blue", "Yellow", "Red", "Orange", "Black", "Innovation",
"Curriculum", "Certain", "Moral", "Goalkeeper", "Replace", "Snake", "Current", "Administration", "Horseshoe", "Patrol",
"Appreciate", "Sticky", "Partner", "Deviation", "Copper", "Radical", "Have", "Perfect", "Level", "Craftsman",
"prediction", "elephant", "sample", "size", "earthwax", "autonomy", "small", "vein", "influence", "security",
"fluctuation", "football", "door", "mention", "merchant", "plant", "killer", "deteriorate", "continuation", "childish"
};
};
#endif