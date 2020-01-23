#include<iostream>
using namespace std;
#include "PlaneFigure.h"

class Circle  : public PlaneFigure
{
public:
	double radius;
	Circle(double x);
	double peri();
	double ar();

};

