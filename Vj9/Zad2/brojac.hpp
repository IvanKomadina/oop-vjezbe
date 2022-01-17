#pragma once
#include <iostream>
#include "zivotinja.hpp"
using namespace std;

class Brojac
{
	int legs = 0;
public:
	void zivotinjaPrint(Zivotinja* zivotinja);
	void NogePrint();
};