#include <iostream>
#include <ctime>
#include "../Zad1/point.hpp"
#include "../Zad1/point.cpp"
#include "../Zad2/weapon.hpp"
#include "../Zad2/weapon.cpp"
#include "../Zad3/target.hpp"
using namespace std;

int main()
{
	srand(time(NULL));

	//generate targets
	int num_of_targets;
	cout << "Enter the number of targets: ";
	cin >> num_of_targets;
	int min = -10, max = 10;
	Target* target_arr = new Target[num_of_targets];
	Point bottom_left, upper_right;
	for (int i = 0; i < num_of_targets; i++)
	{
		cout << "Target " << i+1 << endl;
		cout << "Bottom left: " << endl;
		target_arr[i].bottom_left.set_random(min, max);
		cout << "Upper right: " << endl;
		target_arr[i].upper_right.set_random(min, max);
	}

	//generate weapon
	int capacity;
	cout << "Enter the gun capacity: ";
	cin >> capacity;
	Point gun_position;
	double x_gun, y_gun, z_gun;
	cout << "Gun position: " << endl;
	gun_position.set_random(min, max);
	gun_position.get_values(x_gun, y_gun, z_gun);
	Weapon gun;
	gun.set_weapon(gun_position, capacity);
	gun.reload();

	//check target hits
	int hit_cnt = 0;
	while (!gun.empty())
	{
		gun.shoot();
		for (int i = 0; i < num_of_targets; i++)
		{
			if ((gun.position.getZ() >= target_arr[i].bottom_left.getZ()) && (gun.position.getZ() <= target_arr[i].upper_right.getZ()))
				target_arr[i].set_hit_status(true);
		}
	}
	for (int i = 0; i < num_of_targets; i++)
		if (target_arr[i].get_hit_status())
			hit_cnt++;
	cout << "Number of hit targets: " << hit_cnt;
	delete[] target_arr;
}