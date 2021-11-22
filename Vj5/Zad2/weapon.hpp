#pragma once
#include <iostream>

class Weapon
{
	int capacity, bullets_left;
public:
	Point position;
	void set_weapon(Point position, int capacity);
	void shoot();
	bool empty()const;
	void reload();
};