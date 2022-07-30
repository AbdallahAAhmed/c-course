#include <iostream>

#include "LinkedList.h"

using namespace std;

int main() {
	
	// the node value of instance
	// as Intager
	Vector2<int> vec1;
	vec1.add(10);
	vec1.add(20);

	// as String
	Vector2<string> vec2;
	vec2.add("Eng.Abdallah Ahmed");
	vec2.add("Eng.Abu Alabeid");

	// as Float
	Vector2<float> vec3;
	vec3.add(3.5);
	vec3.add(5.5);

	// Node for int
	Node<int>* currentNodeAsInt = vec1.getRoot();

	// Node for string
	Node<string>* currentNodeAsString = vec2.getRoot();

	// Node for float
	Node<float>* currentNodeAsFloat = vec3.getRoot();

	while (currentNodeAsInt != nullptr) {
		cout << "Node as intager : " << currentNodeAsInt->value << endl;
		currentNodeAsInt = currentNodeAsInt->next;
	}

	while (currentNodeAsString != nullptr) {
		cout << "Node as intager : " << currentNodeAsString->value << endl;
		currentNodeAsString = currentNodeAsString->next;
	}

	while (currentNodeAsFloat != nullptr) {
		cout << "Node as intager : " << currentNodeAsFloat->value << endl;
		currentNodeAsFloat = currentNodeAsFloat->next;
	}


	system("pause");

	return 0;
}