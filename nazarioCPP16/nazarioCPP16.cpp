// Nazario, Xavier
// June 16, 2025 ©
// Chapter 6 Programming Assignment
// References:
// Starting out with C++: from Control
//	Structures to Objects (10th edition) by Tony Gaddis
// Youtube Channel: Tech With Tim, video: Learn C++ With Me #20 - Functions
//	https://www.youtube.com/watch?v=C83tPpvxIJA&t=1363s
// Youtube Channel: Portfolio Courses, video: Introduction To Functions | C++ Tutorial
//	https://www.youtube.com/watch?v=_N3G5L6k_rI
// https://cplusplus.com/doc/tutorial/functions/

#include <iostream>
#include <iomanip>
using namespace std;
//							Chapter 6 Programming Challenge 11 Lowest Score Drop


// Function Prototypes
void getScore(int& score); // Holds user test scores
void calcAverage(int a, int b, int c, int d, int e); // Calculates and Displays average of 4 highest scores
int findLowest(int a, int b, int c, int d, int e); // Gets and Displays lowest of all scores

// Main function starts here
int main() {

	// Variable Declaration
	//	Use a1 to a5 for scores
	int a1, a2, a3, a4, a5;

	// Step 1 Get user input
	cout << "Please enter 5 test scores. " << endl;
	getScore(a1);
	getScore(a2);
	getScore(a3);
	getScore(a4);
	getScore(a5);

	// Step 2 Calculate and Display average
	calcAverage(a1, a2, a3, a4, a5);
	return 0;
}

// Function Definitions
void getScore(int &score) {

	// Step 1 Get user test scores
	//	Store in reference parameter AND validate user input
	do {
		// Get user input
		cout << "Test score: ";
		cin >> score;

		// Validate input
		if (score < 0 || score > 100) {
			cout << "Score must be between 0 and 100." << endl;
		}
	} while (score < 0 || score > 100);
}

void calcAverage(int a, int b, int c, int d, int e) {

	// Variable Declaration
	//	DROP the lowest score
	int lowest = findLowest(a, b, c, d, e);

	// Step 1 Calculate average of 4 highest scores
	int total = (a + b + c + d + e) - lowest;
	double average = total / 4.0;

	// Step 2 Display output
	cout << fixed << setprecision(2);
	cout << "The average of the test scores is " << average << "." << endl;
	cout << "The lowest number is " << lowest << "." << endl;
}

int findLowest(int a, int b, int c, int d, int e) {
	
	// Step 1 Find lowest number of the score
	//	Variable declaration
	int lowest = a;

	// Check for lowest number then return
	if (b < a) lowest = b;
	if (c < lowest) lowest = c;
	if (d < lowest) lowest = d;
	if (e < lowest) lowest = e;
	return lowest;
}
