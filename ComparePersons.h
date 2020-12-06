// Function object to compare the pointers of type Person

// Create the clas ComparePersons
class ComparePersons {
	
	// Define the function object
	public:
		
		// Function object that will return if ptrP1 is less than ptrP2
		bool operator() (const Person* ptrP1, const Person* ptrP2) const {
		
			// Return if ptrP1 is less than ptrP2
			return *ptrP1 < *ptrP2;
		
		}
	
};
