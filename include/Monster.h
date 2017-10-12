#ifndef MONSTER_H
#define MONSTER_H

#include "Character.h"

class Monster : public Character
{
public:
	Monster(int life);
	~Monster();
};
#endif
