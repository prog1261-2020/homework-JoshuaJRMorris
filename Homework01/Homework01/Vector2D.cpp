/*
* @file <Homework01>
*
* @author  <Joshua Morris joshuajrmorris@gmail.com>
* @version <1.0>
*
* change log
* name      date
* J Morris	12/01/2020
*
* @section Academic Integrity
*  I certify that this work is solely my own and complies with
*  NBCC Academic Integrity Policy (policy 1111)
*  Starter files built by D. Burchill, instructor
*
*
* @section DESCRIPTION
*  < Vector testing via Google TEST >
*
*
* @section LICENSE
*  <any necessary attributions>
*
*  Copyright 2020
*  Permission to use, copy, modify, and/or distribute this software for
*  any purpose with or without fee is hereby granted, provided that the
*  above copyright notice and this permission notice appear in all copies.
*
*  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
*  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
*  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
*  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
*  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
*  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
*  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*
*/
//
//
//

#include "Vector2D.h"
#include <sstream>
#include <cmath>

Vector2D::Vector2D(int x, int y) : _x(x), _y(y)
{}

std::string Vector2D::toString() const
{
	std::stringstream ss;

	ss << "(" << _x << ", " << _y << ")";
	return ss.str();
}

double Vector2D::length() const {
	return sqrt(_x * _x + _y * _y);
}


bool AlmostEqualRelative(double A, double B,
	double maxRelDiff = std::numeric_limits<double>::epsilon())
{
	// Calculate the difference.
	double diff = fabs(A - B);
	A = fabs(A);
	B = fabs(B);
	// Find the largest
	double largest = (B > A) ? B : A;

	if (diff <= largest * maxRelDiff)
		return true;
	return false;
}


bool Vector2D::operator==(const Vector2D& rhs) const {			//equals
	double epsilon = 1E-5;
	return (AlmostEqualRelative(length(), rhs.length()));
}

bool Vector2D::operator!=(const Vector2D& rhs) const {			//not equals
	return !((*this) == rhs);
}

bool Vector2D::operator<(const Vector2D& rhs) const				//lesser than
{
	//return (this->length() < rhs.length());   //Comparing length rather than whole value
	return (_x < rhs._x) && (_y < rhs._y);
}

bool Vector2D::operator>(const Vector2D& rhs) const				//greater than
{
	return !((*this) < rhs);
}

bool Vector2D::operator<=(const Vector2D& rhs) const			//lesser or equal to
{
	return (AlmostEqualRelative(length(), rhs.length()) || (_x < rhs._x) && (_y < rhs._y));
}

bool Vector2D::operator>=(const Vector2D& rhs) const			//greater or equal to
{
	return (((*this) == rhs) || !((*this) < rhs));
}

std::ostream& operator<<(std::ostream& os, const Vector2D& rhs)
{
	os << "(" << rhs._x << ", " << rhs._y << ")";
	return os;
}

std::istream& operator>>(std::istream& is, Vector2D& rhs)
{
	char L;
	is >> L >> rhs._x >> L >> rhs._y >> L;
	return is;
}

Vector2D Vector2D::operator + (const Vector2D& rhs) const {
	return Vector2D(_x + rhs._x, _y + rhs._y);
}

Vector2D& Vector2D::operator+=(const Vector2D& rhs)
{
	_x += rhs._x;
	_y += rhs._y;
	return *this;
}

Vector2D& Vector2D::operator++()
{
	++_x;
	++_y;
	return *this;
}

Vector2D Vector2D::operator++(int)
{
	Vector2D result(*this);
	++_x;
	++_y;
	return result;
}