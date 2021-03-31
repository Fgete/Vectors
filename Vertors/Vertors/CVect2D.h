#pragma once

#include <iostream>
using namespace std;

class CVect2D {
private:
	float f_x;
	float f_y;
public:
	// BUILDER & DESTRUCTER & COPIER
	CVect2D(float f_x = 0.0f, float f_y = 0.0f);	// Basic builder
	CVect2D(const CVect2D& v);						// Vector2 builder
	~CVect2D();

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
	CVect2D operator =(const CVect2D& v); // Operator equal
	CVect2D operator +(const CVect2D& v); // Operator add
	CVect2D operator -(const CVect2D& v); // Operator minus
	CVect2D operator *(const CVect2D& v); // Operator multiply
	CVect2D operator /(const CVect2D& v); // Operator divide
	friend ostream& operator <<(ostream& os, const CVect2D& v); // Operator flow
};