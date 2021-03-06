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

#pragma once
#include <vector>

//Vector for Bubble Sort
std::vector<int> bsort(std::vector<int>& v);
//vector for Select Sort
std::vector<int> selsort(std::vector<int>& v);
//Vector function to find the smallest element
int findSmall(std::vector<int> Vec, int i);

int partition(std::vector<int>& values, int left, int right);
std::vector<int>quicksort(std::vector<int>& values, int left, int right);

//int partition(std::vector<int>v, int low, int high);
//std::vector<int> qSort(std::vector<int>& v);
//int quickSort(std::vector<int>&v, int low, int high);
////int quickSort(int v, int low, int high);
//void swap(int a, int b);
