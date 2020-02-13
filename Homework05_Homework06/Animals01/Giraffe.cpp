/*
* @file <filename>
*
* @author  <Joshua Morris joshuajrmorris@gmail.com>
* @version <1.0>
*
* change log
* name   Josh Morris   date 2020-02-06
*
*
* @section Academic Integrity
*  I certify that this work is solely my own and complies with
*  NBCC Academic Integrity Policy (policy 1111)
*
*
* @section DESCRIPTION
*  < inheritance demo >
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

#include "Giraffe.h"
#include <iostream>

Giraffe::Giraffe(std::string n) : Animal(n, "Giraffe", "...*stares in silence*")
{

}

void Giraffe::speak() const {
	Animal::speak();
	std::cout << " and some people believe I am not real.";
}

void Giraffe::move()
{
	std::cout << " I gallop through the plains like a majesticly tall horse\n\n";
}

int Giraffe::hug()
{
	return ++hugged;
}
