#include "PlaneFigure.h"
#include<iostream>
using namespace std;

class Square : public PlaneFigure
{
public:
	double side;
	Square(double x);
	double peri();
	double ar();

};

