// Header file for class Distance

#include <iostream>
#include <string>
using namespace std;

// English Distance class
class Distance {

	// Declare Private attributes	
	private:
		int feet;
		float inches;
	
	// Declare Public Constructors
	public:
	 
		// Constructor (no args)
		Distance() : feet(0), inches(0.0) { 
		} 
		
		// Constructor (two args)
		Distance(int ft, float in) : feet(ft), inches(in) { 
		}
		
		// Declare the overloaded operation functions:
		// Member Function that overloads operator +
		Distance operator + (Distance &d2);
		
		// Friend Function that overloads operator -
		friend Distance operator - (Distance &d1, Distance &d2);
		
		// Friend function that overloads operator <<
		friend ostream& operator << (ostream& out, const Distance &d);
		
		// Friend function that overloads operator >>
		friend istream& operator >> (istream& in, Distance &d); 
		
		// PART 2
		
		// Function that overloads operator ++ (POST-FIX INCREMENT) 
		Distance operator ++ (int);
		
		// Friend Function that overloads operator + (OBJECT + INT)
		friend Distance operator + (Distance &d, int);
		
		// Function that overloads operator >
		bool operator > (Distance &d);
		
};
