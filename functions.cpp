#include <iostream>

using namespace std;

// functions
// parameter function
int calculaotrFun(int a, int b) {
	int result = a + b;
	cout << result << endl;
	return result;
};

void getname() {
	string name = "C++";
	cout << name << endl;
};

void getCharLocation(int* x) {
	int* dX = new int(*x); // dynamic memory
	cout << x << endl;
	delete dX;
};

int main() {

	int num = 6;

	calculaotrFun(5, 5);

	getname();

	getCharLocation(&num);

	cout << &num << endl;

	system("pause");

	return 0;
}