#pragma once

#include<iostream>

using namespace std;

// header

// That's how You detine Template
template <class T>

struct  Node
{
	T value;
	Node* next;
};

template <class T2>
class Vector2
{
public:
	// Proprities

	// methods
	void add(T2 value);
	~Vector2();
	Node<T2>* getRoot();

private:

	Node<T2>* root = nullptr;

};


// Implementation

template <class T2>
// Implementation for add method
void Vector2<T2>::add(T2 value) {
	Node<T2>* newNode = new Node<T2>();
	newNode->value = value;

	if (root == nullptr) {
		newNode->next = nullptr; // make the next node null
		root = newNode; // make the root is newNode
		return;
	}
	newNode->next = root; // make the next node equal root
	root = newNode;
};


template <class T2>
// Implementation for deconstructor method (Vector)
Vector2<T2>::~Vector2() {
	while (root != nullptr) {
		Node<T2>* temp = root;
		root = root->next;
		delete temp;
	}
	cout << "Root is Emplty now" << endl;
}

template <class T2>
// Implementation for Get Root method, it's for get the root
Node<T2>* Vector2<T2>::getRoot() {
	return root;
}

