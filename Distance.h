// Header file for class Distance

// English Distance class
class Distance {

	// Declare Private attributes	
	private:
		int feet;
		float inches;
	
	// Declare Public Constructors
	public: 
		//constructor (no args)
		Distance() : feet(0), inches(0.0) { 
		} 
		
		//constructor (two args)
		Distance(int ft, float in) : feet(ft), inches(in) { 
		}
};
