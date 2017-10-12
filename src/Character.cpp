
#include "Character.h"
#include <random>


Character::Character(int life)
{
	this->life = life;
	initiative = std::rand() % MAX_STAT_VALUE + 1;
	offense = std::rand() % MAX_STAT_VALUE + 1;
	defense = std::rand() % MAX_STAT_VALUE + 1;
}

Character::~Character()
{
}
