#include "MyString.h"
#include<iostream>
using namespace std;

int main() {
	// construction and initialization
	cout << "-----------------Empty CONSTRUCTOR ------------------------- \n";
	MyString empty = MyString();
	empty.Put();

	cout << "-----------------Parameterized CONSTRUCTOR ------------------------- \n";

	MyString a = MyString("example");
	cout << a << endl;

	cout << "\n -------------- Copy CONSTRUCTOR ---------------------------- \n" << endl;
	
	MyString b; // = MyString("AYU"); 
	b = "ASDASD";

	MyString firaol(b);

	cout << firaol << endl;
	cout << "\n ------------------------Put A------------------ \n" << endl;
	a.Put();
	cout << "\n -------------------------Reverse A-------------------- \n" << endl;
	a.Reverse();

	cout << "\n --------------------------Put B------------------ \n" << endl;
	b.Put();
	cout << "\n --------------------------Reverse B--------------------- \n" << endl;
	b.Reverse();

	cout << "\n --------------------------Put C (+ and = Operators) ------------------ \n" << endl;
	MyString c = MyString();
	c = a + b;
	c.Put();
	cout << "\n --------------------------Reverse C--------------------- \n" << endl;
	c.Reverse();
	cout << "\n -------------------------- Put D (+= operator) --------------------- \n" << endl;
	
	MyString d = MyString("SOS");
	d += c;
	d.Put();
	cout << "\n --------------------------Reverse D--------------------- \n" << endl;
	d.Reverse();

	cout << "\n -------------------------- == operator --------------------- \n" << endl;
	if (d == c) cout << "D equals C";
	else
		cout << "D is not equal to C";
	cout << "\n -------------------------- A with Upper --------------------- \n" << endl;
	a.upper();
	cout << "\n -------------------------- B with Lower --------------------- \n" << endl;
	b.lower();

	cout << "\n ---------------------FINISHED--------------------\n" << endl;
	
	

	cout << firaol << endl;
	return 0;
}

