#pragma once
#include <iostream>
using namespace std;

class timer
{
	int h, m;
	double s;
public:
	int get_h();
	int get_m();
	int get_s();
	void set_m(int m);
	void set_s(double s);
	timer() { h = 0; m = 0; s = 0; }
	timer(int hours, int minutes, double seconds) { h = hours; m = minutes; s = seconds; }
	timer operator+=(const timer& t);
	timer operator+(const timer& t);
	timer operator/=(const size_t& n);
	timer operator/(const size_t& n);
	timer operator-=(const timer& max);
	timer operator-(const timer& max);
	friend ostream& operator<<(ostream& s, const timer& t);
	operator double();
	bool operator<(const timer& t);
};

class penalty
{
	double m;
public:
	penalty() { m = 0; }
	penalty(double sec) { m = sec; }
	penalty operator() ( timer& t );
	friend ostream& operator<<(ostream& os, const penalty& p);
};
