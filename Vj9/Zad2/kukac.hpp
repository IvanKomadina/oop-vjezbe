#pragma once
#include <iostream>
#include "zivotinja.hpp"

class Kukac : public Zivotinja
{
	string vrsta;
	int noge;
public:
	int brojNogu();
	string vrstaZivotinje();
	void setVrsta(string s);
	void setNoge(int n);
};

class Zohar : public Kukac
{
public:
	Zohar();
};