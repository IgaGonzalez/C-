#pragma once
#ifndef MYSTRING_H
#define MYSTRING_H
#include<iostream>
using namespace std;




class MyString
{

	char* pData; //pointer to simple C-style representation of the string
				 //(i.e., sequence of characters terminated by null)
				 //pData is only a pointer. You must allocate space for
				 //the actual character data
	int length;  //length of the string
				 //possible other private data
public:
	MyString(); //constructor --- create empty string
	MyString(char* cString); //constructor --- create a string whose data is a copy of
							 //cString
	MyString(const MyString& s); //override the default copy constructor --- why?
								 //important -- think about it -- possible test question
	~MyString(); //destructor -- don't forget to free space allocated by the constructor
				 //i.e., the space allocated for the character data

	MyString& operator = (const MyString& s); //override default assignment operator
	char & MyString::operator[](int index);
	void Put(); //output string
	void Reverse(); //reverse the string
	friend MyString operator+ (const MyString& s, const MyString& s2); //concatenation operator
																	   // ů //other useful member functions
																	   //as you wish
	int len() const;
	void upper();
	void lower();

	MyString& operator+= (const MyString aux);

	friend ostream& operator<<(ostream& os, const MyString&s);
	friend bool operator== (const MyString& left, const MyString& right);
	friend bool operator!=(const MyString& left, const MyString& right);




};

#endif // MYSTRING_H

