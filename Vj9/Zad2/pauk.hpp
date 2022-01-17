#pragma once
#include <iostream>
#include "zivotinja.hpp"

class Pauk : public Zivotinja
{
	string vrsta;
	int noge;
public:
	int brojNogu();
	string vrstaZivotinje();
	void setVrsta(string s);
	void setNoge(int n);
};

class Tarantula : public Pauk
{
public:
	Tarantula();
};

class SpiljskiPauk : public Pauk
{
public:
	SpiljskiPauk();
};