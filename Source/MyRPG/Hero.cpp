#include "Hero.h"

Hero::Hero(int hp, int attack, int defense, int mp)
{
	this->hp = hp;
	this->attack = attack;
	this->defense = defense;
	this->mp = mp;
	this->level = 0;
	this->exp = 0;
}
