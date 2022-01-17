#include <iostream>
#include "pauk.hpp"
#include "ptica.hpp"
#include "brojac.hpp"

int main()
{
	Galeb galeb;
	Tarantula tarantula;

	Zivotinja* zivotinje[2];
	int len = sizeof(zivotinje) / sizeof(Zivotinja);

	zivotinje[0] = new Galeb;
	zivotinje[1] = new Tarantula;

	Brojac brojac;

	for (int i = 0; i < len; i++) 
	{
		brojac.zivotinjaPrint(zivotinje[i]);
	}

	brojac.NogePrint();
}
