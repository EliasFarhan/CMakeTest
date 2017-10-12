// InheritanceMonsters.cpp : Définit le point d'entrée pour l'application console.
//


#include "Hero.h"
#include <random>
#include <ctime>

int main()
{
	std::srand(time(nullptr));
	Hero h(3);

	system("pause");
    return 0;
}

