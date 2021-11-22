#include <iostream>
#include <time.h>
#include "../Zad1/point.hpp"
#include "weapon.hpp"
using namespace std;

void Weapon::set_weapon(Point Position, int Capacity)
{
	this->position = Position;
	this->capacity = Capacity;
	this->bullets_left = Capacity;
}

bool Weapon::empty()const
{
	return(bullets_left == 0);
}

void Weapon::shoot()
{
	bullets_left--;
}

void Weapon::reload()
{
	bullets_left = capacity;
}
