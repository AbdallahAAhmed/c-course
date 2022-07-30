#include <iostream>
#include "RectangleClass.h"

using namespace std;

int main() {

	// Local Domain
	{
		// create instance
		Rectangle rect;

		rect.setValues(10, 20);

		int area = rect.area();

		cout << "Rectangle area : " << area << endl;

		/*cout << "Height is : " << rect.height << endl;

		cout << "Width is : " << rect.width << endl;*/

		system("pause");

		return 0;
	}

}
