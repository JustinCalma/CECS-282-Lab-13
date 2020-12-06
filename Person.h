// Header file for the class Person

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

// Create a class called Person
class Person {
	
	// Declare the private attributes of the class
	private:
		string lastName;
		string firstName;
		long phoneNumber;
		
	// Declare the public functions of the class
	public:
		
		// Default constructor
		Person();
		
		// 3 - Argument constructor
		Person(string lName, string fName, long pNumber);
		
		// Display function
		void Display() const;
		
		// Function that will display the phone number of the Person object
		long GetPhoneNumber() const;		
		
		// Friend functions used to compare Person objects
		friend bool operator < (const Person&, const Person&);
		friend bool operator == (const Person&, const Person&);
	
};

#endif
