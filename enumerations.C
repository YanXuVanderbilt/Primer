#include <iostream>
int main()
{
	//const int input = 0;
	//const int output = 1;
	//const int append = 2;

	// input is 0, output is 1, append is 2
	enum open_modes {input, output, append};

	// shape is 1, sphere is 2, cylinder is 3, polygon is 4
	enum Forms {shape = 1, sphere, cylinder, polygon};

        // point2dis 2, point2w is 3, point3d is 3, point3w is 4
	enum Points { point2d = 2, point2w,
		      point3d = 3, point3w };

	Points pt3d = point3d; // ok: point3d is a Points enumerator
	Points pt2w = 3; // error: pt2w initialized with int
	pt2w = polygon; // error: polygon is not a Points enumerator;
	pt2w = pt3d; //ok: both are objects of Points enum type
}
