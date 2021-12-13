#include <iostream>
#include "board.hpp"
using namespace std;

int main()
{
	Point p1(2, 2), p2(8, 8), p3(2, 8), p4(16, 8);
	Board b(10, 20);
	//b.draw_char(p1, 'x');
	//b.draw_up_line(p1, 'x');
	b.draw_line(p1, p2, 'x');
	b.draw_line(p3, p4, 'x');
	b.display();
}