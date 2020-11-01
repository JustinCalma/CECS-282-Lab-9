// Justin Calma
// CECS 282 Lab 9

// Main file

#include "Distance.h"
#include <iostream>
#include <string>
using namespace std;

int main() {

// Problem 1
	
	// Define distances
	Distance dist1, dist3, dist4; 
	cin>>dist1;
	
	// Define, initialize dist2
	Distance dist2(11, 6.25); 
	
	// Single '+' operator
	dist3 = dist1 + dist2; 
	
	// Friend '-' operators
	dist4 = dist1 - dist2;
	
	// Display all lengths
	cout << "dist1 = ";
	cout<< dist1 << endl;
	cout << "dist2 = ";
	cout<< dist2 << endl;
	cout << "dist3 = ";
	cout<< dist3 << endl;
	cout << "dist4 = ";
	cout<< dist4 << endl;
	
// Problem 2
	
	// Increment Feet by 1
	dist2 = dist1++; 
	
	// Increment dist2 by 10 feet
	dist3 = dist2 + 10;
	
	cout << "dist2 = ";
	cout<< dist2 << endl;
	cout << "dist3 = ";
	cout<< dist3 << endl;
	
	if (dist4 > dist1) {
		cout << "Yes" << endl;
	} else
		cout << "No" << endl;

	
	// Return 0 to main
	return 0;
	
	
}
