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

#pragma once
#include <string>

class Vector2D {
public:
	Vector2D(int x, int y);

	double length() const;

	bool operator ==(const Vector2D& rhs) const;	//equal to
	bool operator !=(const Vector2D& rhs) const;	//not equal
	bool operator <(const Vector2D& rhs) const;		//less than
	bool operator >(const Vector2D& rhs) const;		//greater than
	bool operator <=(const Vector2D& rhs) const;	//less than or equal to
	bool operator >=(const Vector2D& rhs) const;	//greater than or equal to

	Vector2D operator +(const Vector2D& rhs) const;	//plus
	Vector2D& operator +=(const Vector2D& rhs);		//plus equals
	Vector2D& operator ++();						//pre-fix of ++
	Vector2D operator ++(int);						//post-fix of ++



	std::string toString() const;

	friend std::ostream& operator <<(std::ostream&, const Vector2D&);
	friend std::istream& operator >>(std::istream&, Vector2D&);

private:
	int _x;
	int _y;
};

std::ostream& operator <<(std::ostream&, const Vector2D&);


std::istream& operator >>(std::istream&, Vector2D&);