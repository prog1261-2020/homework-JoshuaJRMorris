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

#include "gtest/gtest.h"
#include "Vector2D.h"


TEST(Vector2DTestSuite, constructorTest01) {		//tests constructors
	Vector2D v1(1, 1);

	std::string expectedResult = "(1, 1)"; 
	std::string result = v1.toString();

	EXPECT_EQ(expectedResult, result);
}


TEST(Vector2DTestSuite, equalsTest01) {				//tests equals for true
	Vector2D v1(1, 1);
	Vector2D v2(1, 1);

	EXPECT_TRUE(v1 == v2);
}


TEST(Vector2DTestSuite, equalsTest02) {				//tests equals for false
	Vector2D v1(1, 1);
	Vector2D v2(2, 1);

	EXPECT_FALSE(v1 == v2);
}


TEST(Vector2DTestSuite, notEqualsTest01) {			//tests not equals for true
	Vector2D v1(5, 1);
	Vector2D v2(1, 1);

	EXPECT_TRUE(v1 != v2);
}


TEST(Vector2DTestSuite, notEqualsTest02) {			//tests not equals for false
	Vector2D v1(1, 1);
	Vector2D v2(1, 1);

	EXPECT_FALSE(v1 != v2);
}

TEST(Vector2DTestSuite, lesserThanTest01) {			//tests lesser than for true
	Vector2D v1(1, 1);
	Vector2D v2(2, 2);

	EXPECT_TRUE(v1 < v2);
}

TEST(Vector2DTestSuite, lesserThanTest02) {			//tests lesser than for false
	Vector2D v1(2, 1);
	Vector2D v2(1, 1);

	EXPECT_FALSE(v1 < v2);
}

TEST(Vector2DTestSuite, greaterThanTest01) {		//tests greater than for true
	Vector2D v1(2, 1);
	Vector2D v2(1, 1);

	EXPECT_TRUE(v1 > v2);
}

TEST(Vector2DTestSuite, greaterThanTest02) {		//tests greater than for false
	Vector2D v1(1, 1);
	Vector2D v2(2, 2);

	EXPECT_FALSE(v1 > v2);
}

TEST(Vector2DTestSuite, lessOrEqualTest01) {		//tests less or equal for true
	Vector2D v1(1, 1);
	Vector2D v2(2, 2);

	EXPECT_TRUE(v1 <= v2);
}

TEST(Vector2DTestSuite, lessOrEqualTest02) {		//tests less or equal for false
	Vector2D v1(2, 2);
	Vector2D v2(1, 1);

	EXPECT_FALSE(v1 <= v2);
}

TEST(Vector2DTestSuite, greaterOrEqualTest01) {		//tests greater or equal for true
	Vector2D v1(2, 2);
	Vector2D v2(1, 1);

	EXPECT_TRUE(v1 >= v2);
}

TEST(Vector2DTestSuite, greaterOrEqualTest02) {		//tests greater or equal for false
	Vector2D v1(1, 1);
	Vector2D v2(2, 2);

	EXPECT_FALSE(v1 >= v2);
}

TEST(Vector2DTestSuite, arithmeticOperatorTest01) {		// tests addition
	Vector2D v1(2, 3);
	Vector2D v2(40, 70);
	Vector2D expectedResult(42, 73);
	

	ASSERT_EQ((v1 + v2), expectedResult);
}

TEST(Vector2DTestSuite, arithmeticOperatorTest02) {		// tests plus equals
	Vector2D v1(2, 3);
	Vector2D v2(40, 70);
	Vector2D expectedResult(42, 73);
	v2 += v1;

	ASSERT_EQ (v2, expectedResult);
}

TEST(Vector2DTestSuite, arithmeticOperatorTest03) {		// tests pre-fix increment plus plus
	Vector2D v1(2, 3);
	
	Vector2D expectedResult(3, 4);
	Vector2D v2 = ++v1;

	ASSERT_EQ(v1, expectedResult);
	ASSERT_EQ(v2, expectedResult);
}

TEST(Vector2DTestSuite, arithmeticOperatorTest04) {		// tests post-fix increment plus plus
	Vector2D v1(2, 3);

	Vector2D expectedResult(3, 4);
	Vector2D v2 = v1++;

	ASSERT_EQ(v1, expectedResult);
	ASSERT_EQ(v2, Vector2D(2, 3));
}