#include "CVect2D.h"

CVect2D::CVect2D(float f_x, float f_y)
{
	this->f_x = f_x;
	this->f_y = f_y;
}

CVect2D::~CVect2D()
{
}

CVect2D::CVect2D(const CVect2D& v)
{
	this->f_x = v.f_x;
	this->f_y = v.f_y;
}

void CVect2D::PrintVect2D() const
{
	std::cout << "x: " << this->f_x << " | y: " << this->f_y << std::endl;
}

int CVect2D::GetX() const
{
	return this->f_x;
}

int CVect2D::GetY() const
{
	return this->f_y;
}

void CVect2D::SetX(float f_x)
{
	this->f_x = f_x;
}

void CVect2D::SetY(float f_y)
{
	this->f_y = f_y;
}

CVect2D CVect2D::operator=(const CVect2D& v)
{
	this->f_x = v.f_x;
	this->f_y = v.f_y;

	return *this;
}

CVect2D CVect2D::operator+(const CVect2D& v)
{
	this->f_x += v.f_x;
	this->f_y += v.f_y;

	return *this;
}

CVect2D CVect2D::operator-(const CVect2D& v)
{
	this->f_x -= v.f_x;
	this->f_y -= v.f_y;

	return *this;
}

CVect2D CVect2D::operator*(const CVect2D& v)
{
	this->f_x *= v.f_x;
	this->f_y *= v.f_y;

	return *this;
}

CVect2D CVect2D::operator/(const CVect2D& v)
{
	if (v.f_x != 0 && v.f_y != 0) {
		this->f_x = v.f_x;
		this->f_y = v.f_y;
	}
	else{
		std::cout << "WARNING -- Your trying to divide something by 0 !" << std::endl;
	}
	
	return *this;
}

bool Coincide(const CVect2D vA, const CVect2D vB)
{
	return ((vA.f_x == vB.f_x) && (vA.f_y == vB.f_y));
}
