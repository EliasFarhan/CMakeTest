#ifndef HERO_H
#define HERO_H

#include "Character.h"

#define HERO_LIFE_POINTS 3

class Hero : public Character
{
public:
	Hero(int life=HERO_LIFE_POINTS);
	~Hero();
	void attack(Character& character) override;
	void manage_input();
};

#endif