#pragma once

#include <iostream>

#include "CVect2D.h"

class CVect3D {
private:
	// float f_x;
	// float f_y;
	CVect2D v;
	float f_z;
public:
	// BUILDER & DESTRUCTER & COPIER
	CVect3D(float f_x = 0.0f, float f_y = 0.0f, float f_z = 0.0f);
	CVect3D(const CVect2D& newVect, float f_z = 0.0f);
	~CVect3D();
	CVect3D(const CVect3D& newVect);

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
	friend bool Coincide3D(const CVect3D vA, const CVect3D vB);

	// OPERATOR
	CVect3D operator =(const CVect3D& newVect);
	CVect3D operator +(const CVect3D& newVect);
	CVect3D operator -(const CVect3D& newVect);
	CVect3D operator *(const CVect3D& newVect);
	CVect3D operator /(const CVect3D& newVect);
};