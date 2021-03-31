#include <iostream>

#include "CVect2D.h"

int main() {
	CVect2D v0;
	CVect2D v1(1, 2);
	CVect2D v2(v1);

	v0.PrintVect2D(); // Default values --OK
	v1.PrintVect2D(); // Setting values --OK
	v2.PrintVect2D(); // Setting vector --OK

	v2 + v1;
	v2.PrintVect2D(); // + --OK

	v2 - v1;
	v2.PrintVect2D(); // - --OK

	v2 * v1;
	v2.PrintVect2D(); // * --OK

	v2 / v1;
	v2.PrintVect2D(); // / --OK

	std::cout << Coincide(v1, v2) << std::endl; // Coincide --OK

	return 0;
}