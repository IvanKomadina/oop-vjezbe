#include <iostream>
#include "kukac.hpp"
using namespace std;

int Kukac::brojNogu()
{
	return this->noge;
}

string Kukac::vrstaZivotinje()
{
	return this->vrsta;
}

void Kukac::setVrsta(string s)
{
	this->vrsta = s;
}

void Kukac::setNoge(int n)
{
	this->noge = n;
}

Zohar::Zohar()
{
	setVrsta("Zohar");
	setNoge(6);
}