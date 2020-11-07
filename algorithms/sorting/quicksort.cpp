#include <stdio.h>
#include <iostream>

using namespace std;

//quicksort algorithm that will hopefully be visualized, can easily be changed depending on the chosen visualization framework 


void swap(int* a, int* b) {
	int temp = *a; 
	*a = *b; 
	*b = temp; 
}


int partition(int arr[], int l, int h)
{
	int pivot = arr[h];

	int i = (l - 1);//setting both i & j indexes to -1 and 0 respectively 

	for (int j = l; j <= h - 1; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(&arr[i], &arr[j]); //note that i continues along until we find a value that is larger than the pivot. Until then, the swaps are meaningless
		}
	}
	swap(&arr[h], &arr[i+1]);
	return (i+1);//change the index value of i to the pivot point once it is properly arranged in the array 
}

//won't be used
int anotherPartitionMethod(int arr[], int l, int h) {
	int pivot = arr[h];
	//this method uses two indexes, one starting from the left and the other from the right 
	int i = l - 1; int j = h - 1;
	while (l < h) {
		do { i++; } while (arr[i] < pivot);
		do { j--; } while (arr[j] > pivot);
		if (l < j) {
			swap(&arr[i], &arr[j]);
		}
		swap(&arr[i], &arr[h]);
	}
	return i; 
}

void quicksort(int array[], int l, int h) {
	if (l < h) {//confirms there is at least two elements
		int pivot = partition(array, l, h);
		quicksort(array, l, pivot-1);
		quicksort(array, pivot, h);
	}
}

void printArray(int array[],int length) {
	for (int i = 0; i < length; i++) {
		cout << array[i] << "  ";
	}
}

int main() {
	int array[] = { 1, 5, 56, 23, 2, 7, 15};
	int sizeOfArray = sizeof(array) / sizeof(array[0]);
	quicksort(array,0, sizeOfArray -1);
	printArray(array, sizeOfArray);
}