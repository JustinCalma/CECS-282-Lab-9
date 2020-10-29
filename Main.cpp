// Main file

int main() {
	
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
	
	// Return 0 to main
	return 0;
	
}
