#include <iostream>

using namespace std;

int main() {
	
	string name = "Abdallah Ahmed";
	
	string* ptrMyName = &name;

	string** ptrMyNamePointer = &ptrMyName;

	cout << "Pointer To Another Pointer : " << ptrMyNamePointer << endl;

	// cout << "Name : " << name << endl;

	cout << "Place of name : " << ptrMyName << endl << *ptrMyName<< endl;

	system("pause");

	return 0;
}
