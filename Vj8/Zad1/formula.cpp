#include <iostream>
#include "formula.hpp"
using namespace std;

int timer::get_h()
{
	return h;
}

int timer::get_m()
{
	return m;
}

int timer::get_s()
{
	return s;
}

void timer::set_m(int m)
{
	this->m = m;
}

void timer::set_s(double s)
{
	this->s = s;
}

timer timer::operator+=(const timer& t)
{
	h += t.h;
	m += t.m;
	s += t.s;
	if (m > 59)
	{
		h++;
		m -= 60;
	}
	if (s > 59)
	{
		m++;
		s -= 60;
	}
	return *this;
}

timer timer::operator+(const timer& t) 
{
	h += t.h;
	m += t.m;
	s += t.s;
	if (m > 59)
	{
		h++;
		m -= 60;
	}
	if (s > 59)
	{
		m++;
		s -= 60;
	}
	return *this;
}

timer timer::operator/=(const size_t& n)
{
	double seconds = 3600 * h + 60 * m + s;
	seconds /= n;
	h = seconds / 3600;
	m = (seconds - (h * 3600)) / 60;
	s = (seconds - ((h * 3600) + (m * 60)));
	return *this;
}

timer timer::operator/(const size_t& n) {
	double seconds = 3600 * h + 60 * m + s;
	seconds /= n;
	h = seconds / 3600;
	m = (seconds - (h * 3600)) / 60;
	s = (seconds - ((h * 3600) + (m * 60)));
	return *this;
}

timer timer::operator-=(const timer& max)
{
	int hours = h - max.h;
	int minutes = m - max.m;
	double seconds = s - max.s;
	if (minutes == 0)
	{
		seconds = s - max.s;
	}
	else
	{
		seconds = (s + minutes * 60) - max.s;
	}
	return *this;
}

timer timer::operator-(const timer& max) {
	int hours = h - max.h;
	int minutes = m - max.m;
	double seconds = s - max.s;
	if (minutes == 0)
	{
		seconds = s - max.s;
	}
	else
	{
		seconds = (s + minutes * 60) - max.s;
	}
	return timer(hours, minutes, seconds);
}

timer::operator double()
{
	return(h + m + s);
}

bool timer::operator<(const timer& t)
{
	if (h < t.h && m < t.m && s < t.s)
		return 1;
	else
		return 0;
}

penalty penalty::operator()(timer& t)
{
	int hours = t.get_h();
	int minutes = t.get_m();
	double seconds = t.get_s() + this->m;
	if (seconds > 59)
	{
		minutes++;
		seconds -= 60;
	}
	t.set_m(minutes);
	t.set_s(seconds);
	return *this;
}

ostream& operator<<(ostream& os, const timer& t)
{
	os << t.h << ':' << t.m << ':' << t.s << endl;
	return os;
}

ostream& operator<<(ostream& os, const penalty& p)
{
	os << p.m << endl;
	return os;
}