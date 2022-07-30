#pragma once

// create a class to get area of rectangle -> width & height
// any class should have a header and Implementation

// header
class Rectangle {


public:// public means you can access on proprites or methods from outside the class 

	// proprites
	//int width, height;

	// methods
	int area();

	void setValues(int width, int height);

	// constructor : created when the class create 
	Rectangle();

	// deconstructor : created when the class end.
	~Rectangle();

private: // private means you cannot access on proprites or methods from outside the class, just you can acces on it from inside the class.
	// proprites
	int width, height;

};

