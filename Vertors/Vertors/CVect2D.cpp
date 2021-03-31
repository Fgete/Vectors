#include "CVect2D.h"

// Basic builder
CVect2D::CVect2D(float f_x, float f_y)
{
	this->f_x = f_x;
	this->f_y = f_y;
}

// Vertor2 builder
CVect2D::CVect2D(const CVect2D& v)
{
	this->f_x = v.f_x;
	this->f_y = v.f_y;
}

// Destructor
CVect2D::~CVect2D()
{
}

// Print vector 2
void CVect2D::PrintVect2D() const
{
	std::cout << "x: " << this->f_x << " | y: " << this->f_y << std::endl;
}

// --- GET METHODES ---
int CVect2D::GetX() const
{
	return this->f_x;
}

int CVect2D::GetY() const
{
	return this->f_y;
}

// --- SET METHODES ---
void CVect2D::SetX(float f_x)
{
	this->f_x = f_x;
}

void CVect2D::SetY(float f_y)
{
	this->f_y = f_y;
}

// Operator equal
CVect2D CVect2D::operator=(const CVect2D& v)
{
	this->f_x = v.f_x;
	this->f_y = v.f_y;

	return *this;
}

// Operator add
CVect2D CVect2D::operator+(const CVect2D& v)
{
	this->f_x += v.f_x;
	this->f_y += v.f_y;

	return *this;
}

// Operator minus
CVect2D CVect2D::operator-(const CVect2D& v)
{
	this->f_x -= v.f_x;
	this->f_y -= v.f_y;

	return *this;
}

// Operator multiply
CVect2D CVect2D::operator*(const CVect2D& v)
{
	this->f_x *= v.f_x;
	this->f_y *= v.f_y;

	return *this;
}

// Operator divide
CVect2D CVect2D::operator/(const CVect2D& v)
{
	if (v.f_x != 0 && v.f_y != 0) { // There is no 0
		this->f_x = v.f_x;
		this->f_y = v.f_y;
	}
	else{ // There is a 0, we should not divide
		std::cout << "WARNING -- Your trying to divide something by 0 !" << std::endl;
	}
	
	return *this;
}

// Coincide methode
bool Coincide(const CVect2D vA, const CVect2D vB)
{
	return ((vA.f_x == vB.f_x) && (vA.f_y == vB.f_y));
}
