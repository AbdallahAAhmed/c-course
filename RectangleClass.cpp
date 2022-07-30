#include "RectangleClass.h"
#include <iostream>

using namespace std;

// Implementation
void Rectangle::setValues(int width, int height) {
	this->width = width;
	this->height = height;
};

int Rectangle::area() {
	int result = this->width * this->height;
	return result;
}

Rectangle::Rectangle() {
	cout << "class Created" << endl;
};

Rectangle::~Rectangle() {
	cout << "class disposed" << endl;
};