#include <iostream>
#include <string> // string
#include <cmath> // math

using namespace std;

int main() {

	double dogAge; //cat age double
	string dogName;//cat name

	//promt for cats name and cats age.
	cout << "Please enter dogs' name." << endl;
	cin >> dogName;
	cout << "Please enter " << dogName << "'s age." << endl;
	cin >> dogAge;

	//solve for cats age in human years.
	if (dogAge < 2) {
		dogAge = 7;
	}
	 else {
		dogAge = (dogAge * 7);
	}
	//print out answer for cats age and name.	
	cout << dogName << "'s age is " << dogAge << " years old in human years" << endl;

	//exit
	return 0;
}