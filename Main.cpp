// Justin Calma
// CECS 282 Lab 13

// Driver file of the program that contains the Main function

// uses a multiset to hold person objects
#pragma warning (disable:4786) // for set (Microsoft only)
#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include "Person.h"
#include "ComparePersons.h"
using namespace std;

// Main function of the program
int main() {
	
	// Initialize the pointers of type Person that will be used as our Multiset data
	Person* ptrP1 = new Person("KuangThu", "Bruce", 4157300);
	Person* ptrP2 = new Person("Deauville", "William", 8435150);
	Person* ptrP3 = new Person("Wellington", "John", 9207404);
	Person* ptrP4 = new Person("Bartoski", "Peter", 6946473);
	Person* ptrP5 = new Person("Fredericks", "Roger", 7049982);
	Person* ptrP6 = new Person("McDonald", "Stacey", 7764987);
	Person* ptrP7 = new Person("KuangThu", "Bruce", 5551230);
	Person* ptrP8 = new Person("Deauville", "William", 8435150);
	
	// Declare the multiset to store the pointers of type Persons
	multiset< Person*, ComparePersons > perSet;
	
	// Declare the iterator for the multiset
	multiset< Person*, less<Person> >::iterator iter;
	
	// Insert the pointers into the multiset
	perSet.insert(ptrP1);
	perSet.insert(ptrP2);
	perSet.insert(ptrP3);
	perSet.insert(ptrP4);
	perSet.insert(ptrP5);
	perSet.insert(ptrP6);
	perSet.insert(ptrP7);
	perSet.insert(ptrP8);

	// Display the contents of the multiset to the user
	iter = perSet.begin();
	while (iter != perSet.end()) {
		
		// Call the display() function on each pointer within the multiset
		(*iter++)->Display();
		
	}
	
	// Declare the string variables that will store the first and last name of the desired person
	string searchFirstName = "";
	string searchLastName = "";
	
	cout << endl;
	
	// Output and Get the name of the person the user wants to search for
	cout << "Enter the LAST NAME of the person you want to search for: " << endl;
	cin >> searchLastName;
	
	cout << endl;
	
	cout << "Enter the FIRST NAME of the person you want to search for: " << endl;
	cin >> searchFirstName;
	
	cout << endl;
	
	// Create the person object with the desired name
	Person searchPerson(searchLastName, searchFirstName, 0);
    Person* sPerson= &searchPerson;

    // Get the count of how many people have the desired name in the multiset
    int countPersons = perSet.count(sPerson);	
    
    // Display the data of the people that have been found
    iter = perSet.lower_bound(sPerson);
    while (iter != perSet.upper_bound(sPerson)) {
    	(*iter++)->Display();
	}
    
	// Return 0 to Main
	return 0;
	
}
