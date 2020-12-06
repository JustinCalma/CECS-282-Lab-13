// Implementation file for the class Person

#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include "Person.h"
using namespace std;

// Default constructor
Person::Person() {
	
	// Set the attributes to be the default values
	lastName = "";
	firstName = "";
	phoneNumber = 0;
	
}

// 3 - Arguement Constructor
Person::Person(string lName, string fName, long pNumber) {
	
	// Set the attributes to be the passed in values
	lastName = lName;
	firstName = fName;
	phoneNumber = pNumber;
	
}

// Function that will display the data of the Person object
void Person::Display() const {
	
	// Output to the user
	cout << lastName << ",\t" << firstName << "\t\tPhone: " << phoneNumber << endl;
	
}

// Getter for the phoneNumber attribute
long Person::GetPhoneNumber() const {
	
	// Return phoneNumber
	return phoneNumber;
	
}

// Friend function that will overload operator < for comparing Persons
bool operator < (const Person& p1, const Person& p2) {
	
	// First compare if the last names are both the same
	if (p1.lastName == p2.lastName) {
		
		// Return true if p1 firstName is less than p2 firstName, else return false
		return (p1.firstName < p2.firstName) ? true : false;
		
	}
	
	// If the last names are not the same, determine if p1 lastName is less than p2 lastname 
	return (p1.lastName < p2.lastName) ? true : false;
	
}

// Friend function that will overload operator == for comparing persons
bool operator == (const Person& p1, const Person& p2) {

	// Determine if both person pointers have the same first name and last name
	return (p1.lastName == p2.lastName && p1.firstName == p2.firstName) ? true : false;
	
}
