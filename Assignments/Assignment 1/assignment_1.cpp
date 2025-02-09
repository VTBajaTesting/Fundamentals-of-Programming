//#include "stdafx.h" // Header File used VS.
#include <iostream>
//#include <iomanip> // Used to format the output.
#include <cstdlib> // Used for system().
#include <math.h> // Used for sqrt().
#include <stdio.h>  /* printf, NULL */
#include <time.h>  /* time */
using namespace std;// ?


int main (){

	int S; // Gram/Litre
	double U; // Specific Max. Growth Rate. Per Hour.
	double D; // Maximum Dilution Rate.
	srand(time(NULL)); // Gives different random number each time a program runs.
	const int K = rand() % 7 + 2; // Saturation Constant - Randomly Gegerated Number Between 2 & 7. In Hour/Litre.

	cout << "Enter value between 25 and 75, divisible by 5, for S in Gram/Litre: "; //Eg. 30
	cin >> S;
	cout << "Enter value bigger than 0.2, but less than 0.7, for U per Hour: "; //Eg. 0.3
	cin >> U;
		
	if((25 <= S && S <= 75) && (S % 5 == 0) && (0.2 < U && U < 0.7)){//if( ((S >= 25 && S <= 75) % 5 == 0) && (U > 0.2 && U < 0.7) ){ // Check Condition ***May Need Adjustments***

		D = ( U * ( 1 - sqrt ( K / ( K + S) ) ) ); // Might have to adjust values to fit data type double. Add .00
		cout.precision(3); // Prints 3 values after decimal point.
		cout << "Maximum dilution rate is: " << D << endl;
		
		if(0.35 < D && D < 0.45){//if( D > 0.35 && D < 0.45 ){
			cout << "Kinetic parameters are acceptable." << endl;
		}
		else{
			cout << "Kinetic  parameters are not acceptable." << endl;
		}
		
	}
	else{
		cout << "Invalid Input. Program will now terminate." << endl;
	}
	
	system("PAUSE"); // Pauses the program before termination.
	return 0;
}