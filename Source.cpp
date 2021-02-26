//Kelly Sekins
//9_7_2020
//Calulatior for Cat Age By Year

#include <iostream>
#include <string> // string
#include <cmath> // math

using namespace std;

int main() {

	double catAge; //cat age double
	string catName;//cat name

	//promt for cats name and cats age.
	cout << "Please enter cats' name." << endl;
	cin >> catName;
	cout << "Please enter " << catName << "'s age." << endl; 
	cin >> catAge;

	//solve for cats age in human years.
	if (catAge <= 2) {
		catAge = 25;
	}
	else {
		catAge = (catAge * 4) + 25;
	}	
	//print out answer for cats age and name.	
	cout << catName << "'s age is " << catAge << " years old in human years" << endl;
	
	//exit
	return 0;
}
