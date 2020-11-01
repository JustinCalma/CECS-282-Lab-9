// Implemenation file for class Distance

#include "Distance.h"
#include <iostream>
#include <string>
using namespace std;

//// Default constructor
//Distance::Distance() {
//	
//	// Set the attributes to be the default values
//	feet = 0;
//	inches = 0.0;
//	
//}
//
//// Argument Constructor
//Distance::Distance(int ft, float in) {
//	
//	// Check if the passed in value for inches is greater than 1 foot, 
//	// then continue loop until i becomes less than 1 foot
//    while (in >= 12) {
//    
//    	// Remove 1 foot from in
//    	in = in - 12;
//    	
//    	// Add 1 foot into ft
//        ft = ft + 1;
//        
//    }
//    
//    // Checking if the passed in value for inches is less than 0,
//	// add remove 1 foot from feet and add twelve inches to inches
//    while (in < 0) {
//
//		// Add 12 inches to in
//        in = 12 + in;
//        
//        // Remove 1 foot from feet 
//        ft = ft - 1;
//
//    }
//    
////    // If either ft or in is negative, then make it positive
////    if (ft < 0) {
////    	
////    	// Set ft to be positive
////        ft = -ft;
////    
////	}
////	
////    if (in < 0) {
////    	
////    	// Set in to be positive
////    	in = -in;
////    	
////	}
//	
//	// Set the attributes to be the passed in values
//	feet = ft;
//	inches = in;
//	
//}

// Operator Overloading function for operator +
Distance Distance::operator +(Distance &d2) {
	
	// Create a temp distance object
	Distance dist;
	
	// Calculate the total feet between d1 and d2, then save into dist
	dist.feet = feet + d2.feet;
	
	// Calculate the total inches between d1 and d2, then save into dist
	dist.inches = inches + d2.inches;
	
	// If the total calculated inches is greater than 12, then correct the result
	if (dist.inches > 12.0) {
		
		// Remove 12 inches from dist.inches
		dist.inches -= 12.0;
		
		// Add 1 foot to dist.feet
		dist.feet += 1;
		
	}
	
	// Return object dist containing the calculated values
	return dist;
	
}

// Operator Overloading function for operator -
Distance operator -(Distance &d1, Distance &d2) {
	
	// Create a temp distance object
	Distance dist;
	
	// Calculate the difference in feet between d1 and d2, then save into dist
	dist.feet = d1.feet - d2.feet;
	
	// Calculate the difference in inches between d1 and d2, then save into dist
	dist.inches = d1.inches - d2.inches;
	
	// Check if the calculated difference in inches is negative
	if (dist.inches < 0.0) {
		
		// Add 12 inches to dist.inches
		dist.inches += 12.0;
		
		// Remove 1 foot from dist.feet
		dist.feet -= 1;
		
	}
	
	// Return object dist containing the calculated values
	return dist;
}

// Operator Overloading function for operator <<
ostream& operator << (ostream& out, const Distance &d) {
	
	// Output the feet and inches values of Distance object d
	out << d.feet << "' " << d.inches << "\" ";
	
	// Return object out
	return out;
	
}

// Operator Overloading function for operator >>
istream& operator >> (istream& in, Distance &d)  {
	
	// Create temp variables that will store the user input of feet and inches
	int ft;
	float inch;
	
	// Get the input of feet and inches from the user
	cout << "Enter a value for feet: ";
	in >> ft;
	cout << "Enter a value for inches: ";
	in >> inch;
	
	// Save the inputted values into object d
	d.feet = ft;
	d.inches = inch;
	
	// Return object in
	return in;
	
}

// Operator Overloading function for operator ++ (POST-FIX INCREMENT)
Distance Distance::operator ++ (int) {
	
	// Create a temp distance object
	Distance dist;
	
	// Increment feet by 1 and save it into dist
	feet++;
	dist.feet = feet;
	
	// Set the inches attribute to dist
	dist.inches = inches;
	
	// Return the object dist with the feet value incremented by one foot
	return dist;
	
}

// Operator Overloading function for operator + (OBJECT + INT)
Distance operator + (Distance &d, int x) {
	
	// Create a temp distance object
	Distance dist;
	
	// Increment feet value by 10 feet
	dist.feet = d.feet + x;
	
	// Set inches to dist
	dist.inches = d.inches;
	
	// Return the object dist with the feet value incremented by 10 feet
	return dist;
	
}

// Operator Overloading function for operator >
bool Distance::operator >(Distance &d) {
	
	// If dist4 > dist1
	// Checks if dist4 has a more feet than dist1
	if (feet > d.feet) {
		
		return true;
	
	// If dist4 and dist1 have the same amount of feet, compare the inches
	} else if ( (feet == d.feet) && (inches < d.inches) ) {
		
		// dist1 is greater than dist4
		return false;
		
	// Else, return false 
	} else {
		
		// dist1 is greater than dist4
		return false;
		
	}
	
}

