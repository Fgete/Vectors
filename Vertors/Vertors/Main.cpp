#include <iostream>

#include "CVect2D.h"
#include "CVect3D.h"

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

	std::cout << std::endl; // ----------------------------------------------------------------------------

	CVect3D v3;
	CVect3D v4(1, 2, 3);
	CVect3D v5(v4);
	CVect3D v6(v1, 4);
	CVect3D v7;
	v7 = v6;

	v3.PrintVect3D(); // Default values --OK
	v4.PrintVect3D(); // Setting values --OK
	v5.PrintVect3D(); // Setting vector --OK
	v6.PrintVect3D(); // Setting vector & value --OK
	v7.PrintVect3D(); // Copier --OK

	v5 + v4;
	v5.PrintVect3D(); // + --OK

	v5 - v4;
	v5.PrintVect3D(); // - --OK

	v5 * v4;
	v5.PrintVect3D(); // * --OK

	v5 / v4;
	v5.PrintVect3D(); // / --OK

	std::cout << Coincide3D(v4, v5) << std::endl; // Coincide --OK

	return 0;
}