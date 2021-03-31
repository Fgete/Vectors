#include "CVect3D.h"

int main() {

	// ----------------------------------- VECTOR 2 -----------------------------------------

	cout << endl << " --- VECTOR 2 ---" << endl << endl;

	CVect2D v0;
	CVect2D v1(1, 2);
	CVect2D v2(v1);

	v0.PrintVect2D(); // Default values --OK
	v1.PrintVect2D(); // Setting values --OK
	cout << v2 << endl; // Setting vector --OK

	cout << endl;

	v2 + v1;
	v2.PrintVect2D(); // + --OK

	v2 - v1;
	v2.PrintVect2D(); // - --OK

	v2 * v1;
	v2.PrintVect2D(); // * --OK

	v2 / v1;
	v2.PrintVect2D(); // / --OK

	cout << Coincide(v1, v2) << endl; // Coincide --OK
	cout << endl;

	// ----------------------------------- VECTOR 3 -----------------------------------------

	cout << endl << " --- VECTOR 3 ---" << endl << endl;

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
	cout << v7 << endl; // Copier --OK

	cout << endl;

	v5 + v4;
	v5.PrintVect3D(); // + --OK

	v5 - v4;
	v5.PrintVect3D(); // - --OK

	v5 * v4;
	v5.PrintVect3D(); // * --OK

	v5 / v4;
	v5.PrintVect3D(); // / --OK

	cout << Coincide3D(v4, v5) << endl; // Coincide --OK

	return 0;
}