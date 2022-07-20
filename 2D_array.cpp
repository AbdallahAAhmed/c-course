#include <iostream>

using namespace std; // don't define variable iteration

int main1() {

	int numbers[3][3] = { {10, 20, 30}, {10, 20, 30}, {10, 20, 30} };

	// For rows
	for (int i = 0; i < 3; i++) {
		// for columns
		for (int j = 0; j < 3; j++) {
			if (i == j) {
				cout << "Same Values of index : " << numbers[i][j] << endl;
			}
			else if (i > j) {
				cout << " I is bigger then j : " << numbers[i][j] << endl;
			}
			else if (i > j) {
				cout << " I is smallest then j : " << numbers[i][j] << endl;
			}
			// cout << "items : " <<  numbers[i][j] << endl;
		}
		//cout << "rows" << i << endl;
	}

	system("pause");

	return 0;
}
 