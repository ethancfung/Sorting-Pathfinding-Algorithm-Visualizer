#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <time.h>


//radix sort, now using a vector

using namespace std; 

vector<int> generateVector(int size, int chosenMaxVal) {
	vector<int> v; 
	srand(time(NULL)); //change up the seeds and ensure random generation of numbers
	for (int i = 0; i < size; i++) {
		int randomNumb = rand() % chosenMaxVal; //change for adjustable height
		v.push_back(randomNumb);
	}
	return v; 
}


void print(vector<int> v) {
	int size = v.size(); 
	for (int i = 0; i < size; i++) {
		cout << v.at(i) << " "; 
	}
}
//finding the max value allows us to find the maximum exponent value (for instance max val = 4000, we now know that e = 4)

int getMaxValue(vector<int> v) {
	//since we are not assuming the vector is sorted, we shall not be using the getMax() function
	int maxVal = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v.at(i) > maxVal) {
			maxVal = v.at(i);
		}
	}
	return maxVal;
}

void sortByExp(vector<int> &inputVector, int exponentValue) {//gots to pass by reference

	int sizeOfVector = inputVector.size();
	int tally[10];//hold number of times the same number has appeared
	vector<int> outputVector(sizeOfVector); //initializing outputVector

	//initialize count array to 0
	for (int i = 0; i < 10; i++) {
		tally[i] = 0;
	}

	//finding the total count of each element from 0-9

	for (int i = 0; i < sizeOfVector; i++) 
		tally[((inputVector.at(i) / exponentValue) % 10)]++;


	//changing tally so that it represents the correct position of each index
	for (int i = 1; i < 10; i++) {
		tally[i] += tally[i - 1];
	}

	for (int i = sizeOfVector-1; i >= 0; i--) {
	
		//outputVector.insert(outputVector.begin() +(count[((inputVector.at(i) / exponentValue) % 10)] - 1) , inputVector.at(i));
		outputVector[tally[((inputVector.at(i) / exponentValue) % 10)]-1] = inputVector.at(i);
		tally[((inputVector.at(i) / exponentValue) % 10)]--;
	}

	for (int i = 0; i < sizeOfVector; i++) {
		inputVector.at(i) = outputVector.at(i); 
	}

}

void radixSort(vector<int> &vArray) {//once again passed by reference is clutch
	int maxVal = getMaxValue(vArray);

	//sort vArray maxVal number of times based on the size 
	for (int exponentialVal = 1; maxVal / exponentialVal > 0; exponentialVal *= 10) { //keep multiplying by a factor of 10 until we reach the length of the max value (ex: max = 1000, i = 1, so is divisible and not 0, 10 is still divisible, and 100 as well, finally when we reach 1000, the val = 0 and as such we only do three iterations/loops
		sortByExp(vArray, exponentialVal); //will do at most three iterations, possibly 4 given a four digit limit for random numbers
	}
}


int main() {

	vector<int> test = generateVector(10, 1000);
	print(test);
	cout << "now using the sorting method: " << endl; 
	radixSort(test);
	print(test);

	return 0;
}

