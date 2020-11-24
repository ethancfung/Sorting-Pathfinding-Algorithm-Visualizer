/*
 * mergesort.cpp
 *
 *  Created on: Nov. 21, 2020
 *      Author: evelyn yach
 */

#include <string>
#include <iostream>

//#include "mergesort.h"

using namespace std;

//function for merging two subarrays
//the two subarrays will be the first half and second half of the
//orignal set of provided numbers
void merge(int array[], int left, int middle, int right) {
	int n1 = middle - left + 1;
	int n2 = right - middle;

	//initalize temporary arrays
	int LEFT[n1];
	int RIGHT[n2];

	//copy data
	for (int i = 0; i < n1; i++)
		LEFT[i] = array[left + i];
	for (int j = 0; j < n2; j++)
		RIGHT[j] = array[middle + 1 + j];

	//inital indexes of subarrays
	int i = 0;		//first
	int j = 0;		//second
	int k = left;	//merged

	//merge temp arrays back into main array
	while (i < n1 && j < n2) {
		if (LEFT[i] <= RIGHT[j]) {
			array[k] = LEFT[i];
			i++;
		} else {
			array[k] = RIGHT[j];
			j++;
		}
		k++;
	}

	//copy remaining elements of the LEFT and RIGHT temp arrays
	while (i < n1) {	//LEFT
		array[k] = LEFT[i];
		i++;
		k++;
	}
	while (j < n2) {	//RIGHT
		array[k] = RIGHT[j];
		j++;
		k++;
	}
}

//function for executing the merge sort
void mergesort(int array[], int leftIndex, int rightIndex) {

	if (leftIndex>=rightIndex)	//for recursion
		return;

	int middle = (leftIndex + rightIndex - 1)/2;

	mergesort(array,leftIndex,middle);
	mergesort(array,middle+1,rightIndex);
	merge(array,leftIndex,middle,rightIndex);
}

//Additional Functions
void printArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << "\n";
}

//Driver Function
int main() {
	int array[] = { 12, 11, 13, 5, 6, 7 };
	int array_size = sizeof(array) / sizeof(array[0]);
	mergesort(array, 0, array_size - 1);
	printArray(array, array_size);
	return 0;
}

