#pragma once

#include "CVect2D.h"

class CVect3D {
private:
	CVect2D v;
	float f_z;
public:
	// BUILDER & DESTRUCTER & COPIER
	CVect3D(float f_x = 0.0f, float f_y = 0.0f, float f_z = 0.0f);	// Basic builder
	CVect3D(const CVect2D& newVect, float f_z = 0.0f);				// Vector2 builder
	CVect3D(const CVect3D& newVect);								// Vector3 builder
	~CVect3D();

	// PRINTER
	void PrintVect3D() const;

	// READER
	int GetX() const;
	int GetY() const;
	int GetZ() const;

	// WRITTER
	void SetX(float f_x);
	void SetY(float f_y);
	void SetZ(float f_z);

	// FRIEND
	friend bool Coincide3D(const CVect3D vA, const CVect3D vB); // Coincide methode

	// OPERATOR
	CVect3D operator =(const CVect3D& newVect); // Operator equal
	CVect3D operator +(const CVect3D& newVect); // Operator add
	CVect3D operator -(const CVect3D& newVect); // Operator minus
	CVect3D operator *(const CVect3D& newVect); // Operator multiply
	CVect3D operator /(const CVect3D& newVect); // Operator divide
	friend ostream& operator <<(ostream& os, const CVect3D& v); // Operator flow
};