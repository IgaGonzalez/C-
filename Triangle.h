#include "PlaneFigure.h"
#include<iostream>
using namespace std;


class Triangle : public PlaneFigure
{
public:
	double ba, he, a,b,c;
	Triangle(double side1, double side2, double side3, double base, double height);
	double peri();
	double ar();

};

