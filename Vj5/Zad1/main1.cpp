#include <iostream>
#include <time.h>
#include "point.hpp"
using namespace std;

int main()
{
	srand(time(NULL));
	Point p1;
	double x1, y1, z1;
	cout << "Enter the coordinates of the first point: " << endl << "x: ";
	cin >> x1;
	cout << "y: ";
	cin >> y1;
	cout << "z: ";
	cin >> z1;
	p1.set_values(x1, y1, z1);

	Point p2;
	double min, max;
	cout << "Enter the interval for generating random coordinates: " << endl << "min: ";
	cin >> min;
	cout << "max: ";
	cin >> max;
	p2.set_random(min, max);

	p1.get_values(x1, y1, z1);
	cout << x1 << endl;
	cout << y1 << endl;
	cout << z1 << endl;

	double x2, y2, z2;
	p2.get_values(x2, y2, z2);
	cout << x2 << endl;
	cout << y2 << endl;
	cout << z2 << endl;

	double dis2D = p1.distance_2D(x1, y1, x2, y2);
	cout << "2D distance: " << dis2D << endl;

	double dis3D = p1.distance_3D(x1, y1, z1, x2, y2, z2);
	cout << "3D distance: " << dis3D << endl;
}