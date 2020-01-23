#include "Square.h"
#include<iostream>
using namespace std;

Square::Square(double x)
{
	side = x;
}

double Square::peri()
{
	perimeter = 2*side;
	return perimeter;
}

double Square::ar()
{
	area = side*side;
	return area;
}

