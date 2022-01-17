#include <iostream>
#include <string>
#include "brojac.hpp"
using namespace std;

void Brojac::zivotinjaPrint(Zivotinja* zivotinja)
{
	cout << "Dodan: " << zivotinja->vrstaZivotinje() << endl;
	this->legs += zivotinja->brojNogu();
}

void Brojac::NogePrint()
{
	cout << this->legs << endl;
}