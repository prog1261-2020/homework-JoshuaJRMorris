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

#include "sortFunctions.h"
//function to sort a vector using the bubble sort algorithm
std::vector<int> bsort(std::vector<int>& v) {
	for (int i = 0;i < v.size();i++) {				//allows the full vector to be sorted
		for (int j = i+1;j < v.size();j++) {		//passes through the vector after the first location, which is already in place
			if (v.at(j) < v.at(i)) {				//if j is small than i
				int tmp = v.at(i);					//stores i into tmp
				v.at(i) = v.at(j);					//assigns j to i
				v.at(j) = tmp;						//assigns tmp to j
			}		
		}
	}
	return v;
}

//function to sort a vector using select sort algorithm
std::vector<int> selsort(std::vector<int>& v) {
	int pos;
	int temp;

	for (int i = 0;i < v.size();i++) {
		pos = findSmall(v, i);
		temp = v.at(i);
		v.at(i) = v.at(pos);
		v.at(pos) = temp;
	}

	return v;
}

//funtion to find the smallest element in a vector
int findSmall(std::vector<int> Vec, int i) {
	int small;
	int pos;
	small = Vec.at(i);
	pos = i;
	for (int j = i + 1;j < Vec.size();j++) {
		if (Vec[j] < small) {
			small = Vec[j];
			pos = j;
		}
	}
	return pos;
}

int partition(std::vector<int>& v, int left, int right) {
	int pivotIndex = left + (right - left) / 2;
	int pivotValue = v[pivotIndex];
	int i = left, j = right;
	int temp;
	while (i <= j) {
		while (v[i] < pivotValue) {
			i++;
		}
		while (v[j] > pivotValue) {
			j--;
		}
		if (i <= j) {
			temp = v[i];
			v[i] = v[j];
			v[j] = temp;
			i++;
			j--;
		}
	}
	return i;
}

std::vector<int>quicksort(std::vector<int>& v, int left, int right) {
	if (left < right) {
		int pivotIndex = partition(v, left, right);
		quicksort(v, left, pivotIndex - 1);
		quicksort(v, pivotIndex, right);
	}
	return v;
}


//int partition(std::vector<int> v, int low, int high)
//{
//	int pivot = v[high];
//	int i = (low - 1);
//	for (int j = low - 1;j <= high - 1; j++) {
//		if (v[j] < pivot) {
//			i++;
//			swap(v[i], v[j]);
//		}
//	}
//	swap(v[i + 1], v[high]);
//	return i + 1;
//}



//std::vector<int> qSort(std::vector<int>& v)
//{
//	for (int i = 0;i < v.size();i++) {
//		quickSort(v);
//	}
//}
//
//int quickSort(std::vector<int>&v, int low, int high)
//{
//	int high;
//	int low;
//	if (low < high) {
//		int p = partition(v, low, high);
//		quickSort(v, low, p - 1);
//		quickSort(v, p + 1, high);
//	}
//	return v;
//}

//int quickSort(int v, int low, int high)
//{
//	int high;
//	int low;
//	if (low < high) {
//		int p = partition(v, low, high);
//		quickSort(v, low, p - 1);
//		quickSort(v, p + 1, high);
//	}
//	return v;
//}

//void swap(int a, int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}



