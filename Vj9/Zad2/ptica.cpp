#include <iostream>
#include "ptica.hpp"
using namespace std;

int Ptica::brojNogu()
{
	return this->noge;
}

string Ptica::vrstaZivotinje()
{
	return this->vrsta;
}

void Ptica::setVrsta(string s) 
{
	this->vrsta = s;
}

void Ptica::setNoge(int n) 
{
	this->noge = n;
}

Galeb::Galeb() 
{
	setVrsta("Galeb");
	setNoge(2);
}

Vrabac::Vrabac() 
{
	setVrsta("Sokol");
	setNoge(2);
}