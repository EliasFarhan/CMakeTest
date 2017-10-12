#ifndef CHARACTER_H
#define CHARACTER_H

#define MAX_STAT_VALUE 10

class Character
{
protected:
	int life;
	int initiative;
	int offense;
	int defense;
public:
	Character(int life);
	~Character();

	virtual void attack(Character& character) = 0;
};

#endif