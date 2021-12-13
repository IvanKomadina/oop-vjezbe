#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

typedef struct Point
{
	double x, y;
public:
	Point(double X, double Y) { x = X; y = Y; }
}Point;

class Board
{
	int row, col;
	char** mat;
public:
	Board() { row = 10; col = 20; }
	Board(int r, int c)
	{
		row = r;
		col = c;
		mat = new char*[row];
		for (int i = 0; i < row; i++)
			mat[i] = new char[col];
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
					mat[i][j] = 'o';
				else
					mat[i][j] = ' ';
			}
		}
	}
	Board(const Board& other)
	{
		row = other.row;
		col = other.col;
		mat = new char*[row];
		for (int i = 0; i < row; i++)
			mat[i] = new char[col];
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				mat[i][j] = other.mat[i][j];
			}
		}
	}
	Board(Board&& other)
	{
		row = other.row;
		col = other.col;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
				mat[i][j] = other.mat[i][j];
		}
		other.mat = nullptr;
		other.row = 0;
		other.col = 0;
	}
	~Board()
	{
		for (int i = 0; i < row; i++)
			delete[] mat[i];
		delete[] mat;
	}
	void draw_char(Point p, char ch);
	void draw_up_line(Point p, char ch);
	void draw_line(Point p1, Point p2, char ch);
	void display();
};