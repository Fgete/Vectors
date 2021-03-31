#pragma once

#include <iostream>

class CVect2D {
private:
	float f_x;
	float f_y;
public:
	// BUILDER & DESTRUCTER & COPIER
	CVect2D(float f_x = 0.0f, float f_y = 0.0f);
	~CVect2D();
	CVect2D(const CVect2D& v);

	// PRINTER
	void PrintVect2D() const;

	// READER
	int GetX() const;
	int GetY() const;

	// WRITTER
	void SetX(float f_x);
	void SetY(float f_y);

	// FRIEND
	friend bool Coincide(const CVect2D vA, const CVect2D vB);

	// OPERATOR
	CVect2D operator =(const CVect2D& v);
	CVect2D operator +(const CVect2D& v);
	CVect2D operator -(const CVect2D& v);
	CVect2D operator *(const CVect2D& v);
	CVect2D operator /(const CVect2D& v);
};