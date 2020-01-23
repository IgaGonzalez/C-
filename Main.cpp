#include<iostream>
#include "PlaneFigure.h"
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
using namespace std;

int main() {
	int item;
	item = 10;
	while (item != 5) {

		cout << "This program will assist you calculating the perimeter and area of several geometric figures." << endl;
		cout << "Choose a figure: \n.";
		cout << "1) Square \n.";
		cout << "2) Rectangle \n.";
		cout << "3) Circle \n.";
		cout << "4) Triangle \n.";
		cout << "5) Exit \n";
		cout << "Please enter your choice here:" << endl;
		cin >> item;

		switch (item) {
		case 1: {
			double side;
			cout << "Enter the value of the side: ";
			cin >> side;

			Square square = Square(side);

			cout << "The perimeter of the Square is " << square.peri() << "\n";
			cout << "The area of the Square is " << square.ar() << endl;

			break;

		}
		case 2: {
			double length, width;
			cout << "Enter the value of the length: ";
			cin >> length;
			cout << "Enter the value of the width: ";
			cin >> width;

			Rectangle rectangle = Rectangle(width, length);
			
			cout << "The perimeter of the Rectangle is " << rectangle.peri() << "\n";
			cout << "The area of the Rectangle is " << rectangle.ar() << endl;
			break;
		}
		case 3: {
			double radius;
			cout << "Enter the value of the radius: ";
			cin >> radius;

			Circle circle = Circle(radius);

			cout << "The perimeter of the Circle is " << circle.peri() << "\n";
			cout << "The area of the Circle is " << circle.ar() << endl;
			break;
		}
		case 4: {
			double a, b, c, base, height;
			cout << "Enter the value of the side 1: \n";
			cin >> a;
			cout << "Enter the value of the side 2: \n";
			cin >> b;
			cout << "Enter the value of the side 3: \n";
			cin >> c;
			cout << "Enter the value of the base: \n";
			cin >> base;
			cout << "Enter the value of the height: \n";
			cin >> height;

			Triangle triangle = Triangle(a, b, c, base, height);

			cout << "The perimeter of the Circle is " << triangle.peri() << "\n";
			cout << "The area of the Circle is " << triangle.ar() << endl;
			break;
		}
		case 5:
			break;
		default:
			cout << "Invalid Choice. Please try again " << endl;
			break;


		}
	}
	
}

