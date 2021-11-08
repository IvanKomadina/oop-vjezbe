
#include <iostream>
using namespace std;

struct coordinate
{
	int x, y;
};

struct circle
{
	int radius;
	coordinate center;
	
	void input_circle()
	{
		cout << "Enter the radius and coordinates of circle center: " << endl;
		cout << "Radius: ";
		cin >> radius;
		cout << "x: ";
		cin >> center.x;
		cout << "y: ";
		cin >> center.y;
	}
};


struct rectangle 
{
	coordinate lower_left;
	coordinate upper_left;
	coordinate lower_right;
	coordinate upper_right;

	rectangle* input_rect_arr(int n)
	{
		rectangle* rect_arr = new rectangle[n];

		for (int i = 0; i < n; i++)
		{
			cout << "Enter the coordinates of lower left point of " << i + 1 << ". rectangle" << endl;
			cout << "x: ";
			cin >> rect_arr[i].lower_left.x;
			cout << "y: ";
			cin >> rect_arr[i].lower_left.y;

			cout << "Enter the coordinates of upper right point of " << i + 1 << ". rectangle" << endl;
			cout << "x: ";
			cin >> rect_arr[i].upper_right.x;
			cout << "y: ";
			cin >> rect_arr[i].upper_right.y;

			rect_arr[i].upper_left.x = rect_arr[i].lower_left.x;
			rect_arr[i].upper_left.y = rect_arr[i].upper_right.y;

			rect_arr[i].lower_right.x = rect_arr[i].upper_right.x;
			rect_arr[i].lower_right.y = rect_arr[i].lower_left.y;
		}
		return rect_arr;
	}
};

bool intersect(int x_circle, int y_circle, int rad, int x_rect, int y_rect)
{
	int x, y;

	x = x_rect - x_circle;
	y = y_rect - y_circle;

	if ((x * x) + (y * y) <= (rad * rad))
		{
			return true;
		}
	else
		return false;
		
}

int number_of_intersections(const circle& Circle, const rectangle* (&rect_arr), int n)
{
	int z = 0;

	int x_center = Circle.center.x;
	int y_center = Circle.center.y;
	int rad = Circle.radius;

	for (int i = 0; i < n; i++)
	{
		if (intersect(x_center, y_center, rad, rect_arr[i].lower_left.x, rect_arr[i].lower_left.y))
		{
			z++;
		}
		else if (intersect(x_center, y_center, rad, rect_arr[i].upper_left.x, rect_arr[i].upper_left.y))
		{
			z++;
		}
		else if (intersect(x_center, y_center, rad, rect_arr[i].lower_right.x, rect_arr[i].lower_right.y))
		{
			z++;
		}
		else if (intersect(x_center, y_center, rad, rect_arr[i].upper_right.x, rect_arr[i].upper_right.y))
		{
			z++;
		}
	}
	return z;
}

int main()
{
	int n, num_of_intersections;

	circle Circle;
	Circle.input_circle();

	const rectangle* rect_arr;
	rectangle rect;

	cout << "Enter the size of rectangle array: ";
	cin >> n;

	rect_arr = rect.input_rect_arr(n);

	num_of_intersections = number_of_intersections(Circle, rect_arr, n);

	delete[] rect_arr;

	cout << "Number of rectangles that intersect circle: " << num_of_intersections;
}


