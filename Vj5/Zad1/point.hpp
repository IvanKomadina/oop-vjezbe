#pragma once
#include <iostream>
using namespace std;

class Point {
	double x, y, z;
public:
	Point() {
		x = 0;
		y = 0;
		z = 0;
	};
	void set_values(double X, double Y, double Z);
	void set_random(int min, int max);
	void get_values(double& X, double& Y, double& Z)const;
	double getX() { return x; };
	double getY() { return y; };
	double getZ() { return z; };
	double distance_2D(double x1, double y1, double x2, double y2);
	double distance_3D(double x1, double y1, double z1, double x2, double y2, double z2);
};
