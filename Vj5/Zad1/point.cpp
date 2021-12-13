#include <iostream>
#include <cmath>
#include "point.hpp"
using namespace std;

void Point::set_values(double X, double Y, double Z) {
	x = X;
	y = Y;
	z = Z;
}

void Point::set_random(int min, int max) {
	x = rand() % (max + 1 - min) + min;
	cout << "x: " << x << endl;
	y = rand() % (max + 1 - min) + min;
	cout << "y: " << y << endl;
	z = rand() % (max + 1 - min) + min;
	cout << "z: " << z << endl;
}

void Point::get_values(double& X, double& Y, double& Z)const {
	X = this->x;
	Y = this->y;
	Z = this->z;
}

double Point::getX()
{
	return x;
}

double Point::getY()
{
	return y;
}

double Point::getZ()
{
	return z;
}

double Point::distance_2D(double x1, double y1, double x2, double y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}

double Point::distance_3D(double x1, double y1, double z1, double x2, double y2, double z2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2) * 1.0);
}