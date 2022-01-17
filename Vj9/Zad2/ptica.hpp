#pragma once
#include <iostream>
#include "zivotinja.hpp"

class Ptica : public Zivotinja
{
	string vrsta;
	int noge;
public:
	int brojNogu();
	string vrstaZivotinje();
	void setVrsta(string s);
	void setNoge(int n);
};

class Galeb : public Ptica
{
public:
	Galeb();
};

class Vrabac : public Ptica
{
public:
	Vrabac();
};
