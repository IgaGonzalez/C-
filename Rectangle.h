#include "PlaneFigure.h"
#include<iostream>
using namespace std;

class Rectangle : public PlaneFigure
{
public:
	double width,length;
	Rectangle(double x, double y);
	double peri();
	double ar();
	
};


