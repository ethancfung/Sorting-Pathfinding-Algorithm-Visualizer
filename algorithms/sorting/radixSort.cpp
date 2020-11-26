// Radix Sort in C++

#include <iostream>
#include <time.h>
using namespace std;


// Function to get the largest element from an array
int findMaxVal(int inputArr[], int n) {
  int max = inputArr[0];
  for (int i = 1; i < n; i++)
    if (inputArr[i] > max)
      max = inputArr[i];
  return max;
}

// Using counting sort to sort the elements in the basis of significant places
void countingSort(int inputArr[], int sizeOfArr, int expVal) {
  //const int max = 10;
  int sortedArr[sizeOfArr];
  int tally[10];

//first initializing the array to 0
  for (int i = 0; i < 10; ++i){
    tally[i] = 0;
  }

  // finding the amount of times a number from 0-9 appears within the input array 
  for (int i = 0; i < sizeOfArr; i++){
    tally[(inputArr[i] / expVal) % 10]++;
  }

  // fixing the index values based on the tally
  for (int i = 1; i < 10; i++){
    tally[i] += tally[i - 1];
  }

  // using values from right to left and outputing into a secondary array (sorted)
  for (int i = sizeOfArr - 1; i >= 0; i--) {
    sortedArr[tally[(inputArr[i] / expVal) % 10] - 1] = inputArr[i];
    tally[(inputArr[i] / expVal) % 10]--;
  }

  for (int i = 0; i < sizeOfArr; i++){
    inputArr[i] = sortedArr[i];
  }
}

// Main function to implement radix sort
void radixsort(int array[], int size) {
  // Get maximum element
  int maxVal = findMaxVal(array, size);

  // Apply counting sort to sort elements based on place value.
  for (int expVal = 1; maxVal / expVal > 0; expVal *= 10)
    countingSort(array, size, expVal);
}

// Print an array
void printArray(int array[], int sizeOfArr) {
  for (int i = 0; i < sizeOfArr; i++)
    cout << array[i] << " ";
  cout << endl;
}

int* generateArray(int sizeOfArr, int maxRandVal){ //can change the size down the line
 int * randomArray = new int [sizeOfArr];
 srand(time(NULL));

 for(int i = 0; i < sizeOfArr; i++){
  int randomVal = rand() % maxRandVal; 
  randomArray[i] = randomVal;
 }
 return randomArray; 
}


int main() {
  int *arr = generateArray(20, 1000); //size and maximum random values
  printArray(arr, 20);
  radixsort(arr, 20);
  printArray(arr,20);
}
