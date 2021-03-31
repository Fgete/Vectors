#include "CVect3D.h"

// Basic builder
CVect3D::CVect3D(float f_x, float f_y, float f_z)
	: CVect2D(f_x, f_y)
{
	this->f_z = f_z;
}

// Vector2 builder
CVect3D::CVect3D(const CVect2D& newVect, float f_z)
	: CVect2D(newVect)
{
	this->f_z = f_z;
}

// Vector3 builder
CVect3D::CVect3D(const CVect3D& newVect)
	: CVect2D(newVect)
{
	this->f_z = newVect.f_z;
}

// Destructor
CVect3D::~CVect3D()
{
}

// Print vector 3D
void CVect3D::PrintVect3D() const
{
	cout << "x: " << this->GetX() << " | y: " << this->GetY() << " | z: " << this->f_z << endl;
}

// --- GET METHODES ---
int CVect3D::GetZ() const
{
	return this->f_z;
}

// --- SET METHODES ---
void CVect3D::SetZ(float f_z)
{
	this->f_z = f_z;
}

// Operator equal
CVect3D CVect3D::operator=(const CVect3D& newVect)
{
	this->SetX(newVect.GetX());
	this->SetY(newVect.GetY());
	this->f_z = newVect.f_z;

	return *this;
}

// Operator add
CVect3D CVect3D::operator+(const CVect3D& newVect)
{
	this->SetX(this->GetX() + newVect.GetX());
	this->SetY(this->GetY() + newVect.GetY());
	this->f_z += newVect.f_z;

	return *this;
}

// Operator minus
CVect3D CVect3D::operator-(const CVect3D& newVect)
{
	this->SetX(this->GetX() - newVect.GetX());
	this->SetY(this->GetY() - newVect.GetY());
	this->f_z -= newVect.f_z;

	return *this;
}

// Operator multiply
CVect3D CVect3D::operator*(const CVect3D& newVect)
{
	this->SetX(this->GetX() * newVect.GetX());
	this->SetY(this->GetY() * newVect.GetY());
	this->f_z *= newVect.f_z;

	return *this;
}

// Operator divide
CVect3D CVect3D::operator/(const CVect3D& newVect)
{
	if (newVect.GetX() != 0 && newVect.GetY() != 0 && newVect.f_z) {
		this->SetX(this->GetX() / newVect.GetX());
		this->SetY(this->GetY() / newVect.GetY());
		this->f_z /= newVect.f_z;
	}
	else {
		cout << "WARNING -- Your trying to divide something by 0 !" << endl;
	}

	return *this;
}

// Operator flow
ostream& operator<<(ostream& os, const CVect3D& v)
{
	os << "x: " << v.GetX() << " | y: " << v.GetY() << " | z: " << v.f_z;
	return os;
}

// Return bool of coincidence
bool Coincide3D(const CVect3D vA, const CVect3D vB)
{
	return ((vA.GetX() == vB.GetX()) && (vA.GetY() == vB.GetY()) && (vA.f_z == vB.f_z));
}