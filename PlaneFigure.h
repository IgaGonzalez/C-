#pragma once
#include<iostream>
using namespace std;

class PlaneFigure { //Base figure
	//double perimeter, area; //Doubles in order to be able to handle decimal
public:
	double perimeter, area;
	/*
	double peri(); //Perimeter overridable function
	double ar(); //Area overridable function
	*/
	virtual double peri() = 0;
	virtual double ar() = 0;
};