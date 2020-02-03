/*
* @file <filename>
*
* @author  <Joshua Morris joshuajrmorris@gmail.com>
* @version <1.0>
*
* change log
* name  Josh Morris    date 2020-02-03
*
*
* @section Academic Integrity
*  I certify that this work is solely my own and complies with
*  NBCC Academic Integrity Policy (policy 1111)
*
*
* @section DESCRIPTION
*  < Sorting algorithms/Homework03 >
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
#include <vector>
#include "sortFunctions.h"
#include <algorithm>

TEST(TestCaseName, testBSsortCallFunc) {
	std::vector<int> v = { 73, 42, 12, 19 };

	auto vresult = bsort(v);
}

TEST(TestCaseName, testBSsort01) {
	std::vector<int> v = { 73, 42, 12, 19 };
	std::vector<int> vExpected = { 12, 19, 42, 73 };

	auto vResult = bsort(v);

	ASSERT_EQ(vResult.size(), vExpected.size());
	
}

TEST(TestCaseName, testBSsort02) {
	std::vector<int> v = { 73, 42, 12, 19 };
	std::vector<int> vExpected = { 12, 19, 42, 73 };

	auto vResult = bsort(v);

	bool isSame = std::equal(vResult.begin(), vResult.end(), vExpected.begin());

	ASSERT_EQ(vResult.size(), vExpected.size());
	ASSERT_TRUE(isSame);

}

TEST(TestCaseName, testselSort01) {
	std::vector<int> v = { 73, 42, 12, 19 };
	std::vector<int> vExpected = { 12, 19, 42, 73 };

	auto vResult = selsort(v);

	bool isSame = std::equal(vResult.begin(), vResult.end(), vExpected.begin());

	ASSERT_EQ(vResult.size(), vExpected.size());
	ASSERT_TRUE(isSame);

}