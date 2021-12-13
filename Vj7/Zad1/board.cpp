#include <iostream>
#include <algorithm>
#include <cmath>
#include "board.hpp"
using namespace std;

void Board::display()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cout << mat[i][j];
		cout << endl;
	}
}

void Board::draw_char(Point p, char ch)
{
	round(p.x);
	round(p.y);
	if (p.x <= 0 || p.x >= col || p.y <= 0 || p.y >= row)
	{
		cout << "Wrong point values!" << endl;
		return;
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (p.x == j && p.y == i)
				mat[i][j] = ch;
		}
	}
}

void Board::draw_up_line(Point p, char ch)
{
	round(p.x);
	round(p.y);
	if (p.x >= col || p.y >= row)
	{
		cout << "Wrong point values!" << endl;
		return;
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (p.y >= i && p.x == j && i > 0)
				mat[i][j] = ch;
		}
	}
}

void Board::draw_line(Point p1, Point p2, char ch)
{	
	int x1 = round(min(p1.x, p2.x));
	int x2 = round(max(p1.x, p2.x));
	int y1 = round(min(p1.y, p2.y));
	int y2 = round(max(p1.y, p2.y));

	if (x1 <= 0 || x1 >= col || x2 >= col || y1 <= 0 || y1 >= row || y2 >= row)
	{
		cout << "Wrong point values\n";
		return;
	}
	if (x1 == x2 && y1 == y2) 
	{
		mat[x1][y1] = ch;
	}

	while (x1 != x2 || y1 != y2)
	{
		mat[y1][x1] = ch;
		if (x1 != x2 && y1 != y2)
		{
			x1++;
			y1++;
		}
		else if (x1 == x2 && y1 != y2) 
			y1++;
		else if (x1 != x2 && y1 == y2) 
			x1++;
	}
}