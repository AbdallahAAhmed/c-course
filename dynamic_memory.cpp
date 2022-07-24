#include <iostream>

using namespace std;


int main1() {

	// define stack variable
	int number =  0;


	// define dynamic memory variable
	int* ptrNumber = &number;

	int* dNumber = new int(*ptrNumber);

	int** ptrDnumber = &dNumber;


	cout << &dNumber << endl;
	

	string name = "Abdallah Ahmed";

	string* dName = new string(name);


	delete dNumber; // that's how to delete dynamic memory variable


	system("pause");

	return 0;
}