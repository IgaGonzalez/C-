#define PI 3.14159265
#include "Circle.h"
#include <math.h>
#include<iostream>

using namespace std;

Circle::Circle(double x)
{
	radius = x;
}

double Circle::peri()
{
	perimeter = round(2 * radius * PI);
	return perimeter;
}

double Circle::ar()
{
	area = round(radius * radius * PI);
	return area;
}
