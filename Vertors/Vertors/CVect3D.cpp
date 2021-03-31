#include "CVect3D.h"

CVect3D::CVect3D(float f_x, float f_y, float f_z)
{
	this->v.SetX(f_x);
	this->v.SetY(f_y);
	this->f_z = f_z;
}

CVect3D::CVect3D(const CVect2D& newVect, float f_z)
{
	this->v.SetX(newVect.GetX());
	this->v.SetY(newVect.GetY());
	this->f_z = f_z;
}

CVect3D::~CVect3D()
{
}

CVect3D::CVect3D(const CVect3D& newVect)
{
	this->v.SetX(newVect.GetX());
	this->v.SetY(newVect.GetY());
	this->f_z = newVect.f_z;
}

void CVect3D::PrintVect3D() const
{
	std::cout << "x: " << this->v.GetX() << " | y: " << this->v.GetY() << " | z: " << this->f_z << std::endl;
}

int CVect3D::GetX() const
{
	return this->v.GetX();
}

int CVect3D::GetY() const
{
	return this->v.GetY();
}

int CVect3D::GetZ() const
{
	return this->f_z;
}

void CVect3D::SetX(float f_x)
{
	this->v.SetX(f_x);
}

void CVect3D::SetY(float f_y)
{
	this->v.SetY(f_y);
}

void CVect3D::SetZ(float f_z)
{
	this->f_z = f_z;
}

CVect3D CVect3D::operator=(const CVect3D& newVect)
{
	this->v.SetX(newVect.GetX());
	this->v.SetY(newVect.GetY());
	this->f_z = newVect.f_z;

	return *this;
}

CVect3D CVect3D::operator+(const CVect3D& newVect)
{
	this->v.SetX(this->v.GetX() + newVect.GetX());
	this->v.SetY(this->v.GetY() + newVect.GetY());
	this->f_z += newVect.f_z;

	return *this;
}

CVect3D CVect3D::operator-(const CVect3D& newVect)
{
	this->v.SetX(this->v.GetX() - newVect.GetX());
	this->v.SetY(this->v.GetY() - newVect.GetY());
	this->f_z -= newVect.f_z;

	return *this;
}

CVect3D CVect3D::operator*(const CVect3D& newVect)
{
	this->v.SetX(this->v.GetX() * newVect.GetX());
	this->v.SetY(this->v.GetY() * newVect.GetY());
	this->f_z *= newVect.f_z;

	return *this;
}

CVect3D CVect3D::operator/(const CVect3D& newVect)
{
	if (newVect.v.GetX() != 0 && newVect.v.GetY() != 0 && newVect.f_z) {
		this->v.SetX(this->v.GetX() / newVect.GetX());
		this->v.SetY(this->v.GetY() / newVect.GetY());
		this->f_z /= newVect.f_z;
	}
	else {
		std::cout << "WARNING -- Your trying to divide something by 0 !" << std::endl;
	}

	return *this;
}

bool Coincide3D(const CVect3D vA, const CVect3D vB)
{
	return ((vA.v.GetX() == vB.v.GetX()) && (vA.v.GetY() == vB.v.GetY()) && (vA.f_z == vB.f_z));
}
