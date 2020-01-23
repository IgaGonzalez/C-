#include "Rectangle.h"
#include<iostream>
using namespace std;

Rectangle::Rectangle(double x,double y)
{
	width = x;
	length = y;
}

double Rectangle::peri()
{
	perimeter = (2*width)+(2*length);
	return perimeter;
}

double Rectangle::ar()
{
	area = width*length;
	return area; 

}



