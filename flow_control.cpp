#include <iostream>

using namespace std;

constexpr auto EMPSALARYARRSIZE = 10;

constexpr auto NUMBERSSIZE = 10;

int main() {

	// 1D, 2D

	// That's how you can define array in c++ -> It's just one way
	int numbers[NUMBERSSIZE] = {11, 25, 30, 40, 50, 60, 80, 70, 90, 2};

	// for loop & Statements
	for (int i = 0; i < NUMBERSSIZE; i++) {

		if (numbers[i] == 40) {
			// cout << "number is " << numbers[i] << " is a Lucky number" << endl;
		}
		else {
			// cout << "number is " << numbers[i] << endl;
		}
		
		/*if (numbers[i] == 11) {
			cout << "number is " << numbers[i] << endl;
		}*/

		// cout << "Number[" << i << "]" << numbers[i] << endl;
	}
	
	

	// while loop

	// do while loop

	int employees[EMPSALARYARRSIZE];

	employees[0] = 1000;
	employees[1] = 1600;
	employees[2] = 5000; // MANAGER
	employees[3] = 3700;
	employees[4] = 800;
	employees[5] = 810;
	employees[6] = 750;
	employees[7] = 900;
	employees[8] = 100;
	employees[9] = 200;

	// cout << "First Employee : " << employees[0] << endl;

	/*for(int i = 0; i < EMPSALARYARRSIZE; i++) {
		if (employees[i] < 1000 && employees[i] > 500) {
			cout << "Junior employee : " << employees[i] << endl;
		}
		else if (employees[i] < 500) {
			cout << "Frash employee : " << employees[i] << endl;
		}
		else if (employees[i] > 1000) {
			cout << "Senior employee : " << employees[i] << endl;
		}
		else {
			cout << "Mid employee : " << employees[i] << endl;
		}
	}*/

	/*while (EMPSALARYARRSIZE < 11) 
	{
		cout << "print value \t " << EMPSALARYARRSIZE;
		EMPSALARYARRSIZE + 1 ;
	}*/

	/*do {
		cout << "print value \t " << EMPSALARYARRSIZE;
	} while (EMPSALARYARRSIZE < 11);*/

	system("pause");

	return 0;
}

// i = i + 1 i++ increment i-- decrement

// 5 way thgough program run ? 
// 1 - Preproccessing
// 2 - assemblers
// 3 - linkers
// 4 - loading
// 5 - exection
