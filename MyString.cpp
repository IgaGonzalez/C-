#include "MyString.h"
#include <iostream>
#include<cctype>


using namespace std;


MyString::MyString()  // Default Constructor					  
{										  
	length = 0;			 //Initialize length and pData  
	pData = new char[0];				  
}

MyString::MyString(char* cString) // Parameterized Constructor
{
	if (cString) { //Check if cString is pointing to anything
		int n = 0;
		while (cString[n] != '\0') n++; //Keep adding 1 to n until the last value
		length = n; //Set the length to n
		pData = new char[n]; //Set the char* to n
		for (int j = 0; j < n;j++)
			pData[j] = cString[j]; //Fill pData
	}
	else { //If the parameter is not pointing to something , initialize everything to 0. 
		MyString();
	}
}

MyString::MyString(const MyString& s) //Copy Constructor. 
{
	length = s.len(); //Set the length same as the parameter's length
	pData = new char[length]; //Set the char* array to the parameter's length
	for (int j = 0; j < length; j++)
		pData[j] = s.pData[j]; //Copy the pData from the constructor to our pData
}

MyString::~MyString() //Destructor. De-allocate memory
{
	if (pData != NULL) {
		delete pData;
		length = 0;
	}
}

MyString& MyString::operator=(const MyString& s)
{
	// TODO: insertar una instrucción return aquí
	if (this == &s) return *this; //Checks that the address from the parameter is not the same as the one we're checking
	delete pData; //De-allocate memory
	length = s.len(); //Set the length same as the parameter's length
	pData = new char[length];  //Set the char* array to the parameter's length
	for (int j = 0; j < length; j++)
		pData[j] = s.pData[j];
	return *this;
}

int MyString::len() const //Return the length of the object we are using
{
	return length;
}

void MyString::upper() //Set's the string to uppercase
{
	for (int i = 0; i < length; i++){ //Travelling through the array
		if ('a' <= pData[i] && pData[i] <= 'z'){ // Check that pData info contains lowercase letters between a and z. 
										//In ASCII the difference between lowercase letters and uppercase are constant. Therefore...
			pData[i] -= ('a' - 'A'); // For every lowcase letter the we find, substract the difference between a and A in the ASCII table. 
		}
		cout << pData[i]; // Output the object in uppercase
	}
}

void MyString::lower() //Set's the string to lowercase
{
	for (int i = 0; i < length; i++) { //Travelling through the array
		if ('A' <= pData[i] && pData[i] <= 'Z') { // Check that pData info contains lowercase letters between A and Z. 
									 //In ASCII the difference between lowercase letters and uppercase are constant. Therefore...
			pData[i] += ('a' - 'A');// For every uppercase letter the we find, add the difference between a and A in the ASCII table. 
		}
		cout << pData[i]; // Output the object in uppercase
	}
}

MyString & MyString::operator+=(const MyString aux) //Keeping the same value and adding to the end.
{
	*this = *this + aux; // Add to the pointer the parameter aux  
	return *this; //return new pointer
}

char & MyString::operator[](int index) { // Used to be able to pass an index to our array.
	if (index = 0 || index > length) { //Checks if the index is logical. A.K.A an index bigger than 0 and less than the actual length.
		cout << "Invalid index";
		//EXIT
		exit(-1); //Exits the program
	}
	return pData[index]; //Returns the pData with the index we used. 
}

void MyString::Put() { //Used to output the MyString object
	for (int i = 0; i < length; i++) { //Travelling through the array 
		cout << pData[i]; //Output the pData in order 
	}
}

void MyString::Reverse() { //Used to reverse the current string
	MyString aux = MyString(); //Create an auxiliary MyString object to save the reversed string
	aux.length = length; //Set the string
	aux.pData = new char[length]; //Set the pData size

	int last_value = length - 1; //Establishes the last value of the array
	for (int i = 0; i < length; i++, last_value--) { //For loop to travel through AUX in order but pData backwards
		aux.pData[i] = pData[last_value];
		cout << aux.pData[i]; //Output the pData in order 
	}

}

MyString operator+(const MyString& left, const MyString& right) //Used to concatenate
{
	MyString aux; //Create an auxiliary MyString object to save the concatenated string.
	aux.length = left.length+right.length; // Set the auxiliary's length to the sum of the parameters.
	aux.pData = new char[aux.length]; //Set the auxiliary's size array to the length
	for (int i = 0; i < left.length;i++) { //Travelling through the array
		aux.pData[i] = left.pData[i]; //Copying the first parameter data to the first spots in the auxiliary array
		for (int j = 0; j < right.length;j++) //Travelling through the array
			aux.pData[j + left.length] = right.pData[j]; //Start copying from the last place we used in the previous array. 
	}
	return aux; //Return MyString auxiliary object
}


ostream & operator<<(ostream & os, const MyString & aux)
{
	for (auto i = 0; i < aux.length; i++)
		os.put(aux.pData[i]);
	return os;
}

bool operator==(const MyString& left, const MyString& right) // Checks if both of the parameters are equal
{
	if (left.len() != right.len()) return false; //If both addresses are the same then return false
	int i = 0; //Auxiliary integer 
	while ((i < left.len()) && (left.pData[i] == right.pData[i])) i++; // While the length be bigger than 0 AND both of pData's are same, keep adding 1 to i.
	return (i == left.len()); //Return true if i is the same as the length of the left parameter. 
}

bool operator!=(const MyString & left, const MyString & right)//Checks if different
{
	return !(left == right); //If not the same, return false. Else true. 
}
