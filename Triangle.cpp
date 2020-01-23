#include<iostream>
#include "Triangle.h"
using namespace std;


Triangle::Triangle(double side1, double side2, double side3, double base, double height)
{
	a = side1;
	b = side2;
	c = side3;
	ba = base;
	he = height;

}
double Triangle::peri()
{
	perimeter = a+b+c;
	return perimeter;
}

double Triangle::ar()
{
	area = (ba*he)/2;
	return area;
}
