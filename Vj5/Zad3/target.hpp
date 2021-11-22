#pragma once
#include "../Zad1/point.hpp"

class Target
{
	bool is_hit = false;
public:
	Point bottom_left, upper_right;
	void set_hit_status(bool status) { is_hit = status; }
	bool get_hit_status() const { return is_hit; };
};


