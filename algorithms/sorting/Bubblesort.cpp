#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <fstream>
#include <set>
#include <algorithm>
#include <iterator>
#include "Bubblesort.h"
using namespace std;

int main(){
	sorts sort;
	sort.initialize();
	sort.printList();
	sort.Insertion();
return 0;
}


void sorts::initialize() {
	int size = 20;
	srand (time(NULL));
for(int i = 0; i<size;i++){
	int temp = rand() % (size*3) + 1;
list[i] = (temp);
}
}
void sorts::printList() {
for(int i = 0; i<sizeof(list)/sizeof(list[0]);i++){
cout << list[i] << ", ";
}
cout<<endl;
}

void sorts::printList(int x, int y) {
for(int i = 0; i<sizeof(list)/sizeof(list[0]);i++){
	if(i ==x || i ==y){
		cout << ".."<<list[i] << ".., ";
	}else{
		cout << list[i] << ", ";
	}

}
cout<<endl;
}

void sorts::scramble(){
	for(int i = 0; i < 100; i++){
		int a = rand()%((sizeof(list)/sizeof(list[0]))-1);
		int b =rand()%((sizeof(list)/sizeof(list[0]))-1);

		swap(a,b);
	}
	printList();
}

int sorts::swap(int x, int y){
	printList(x,y);
	int temp = list[x];
	list[x]=list[y];
	list[y]=temp;
	return 0;
}

void sorts::Bubble() {
	bool change = false;
	do{
		change = 0;
for(int i = 0; i<(sizeof(list)/sizeof(list[0]))-1;i++){
if(list[i]>list[i+1]&&list[i]!=list[i+1]){
	swap(i, i+1);
	change=true;;
}
}
	}while(change);
	printList();
}

void sorts::Selection(){
	int min = list[0];
	int minidx = 0;
	int bottom = 0;
	while(bottom<(sizeof(list)/sizeof(list[0]))){
	for(int i = bottom; i<(sizeof(list)/sizeof(list[0]));i++){
		if(min>list[i]){
			min = list[i];
			minidx=i;
		}
	}
	swap(bottom, minidx);
	bottom++;
	min = list[bottom];
	minidx = bottom;
}
	printList();
}

void sorts::Insertion(){
	int bottom = 0;
	int min = list[bottom];
	int minidx = bottom;
	while(bottom<(sizeof(list)/sizeof(list[0]))){
	for(int i = bottom; i<(sizeof(list)/sizeof(list[0]));i++){
		if(min>list[i]){
			min = list[i];
			minidx=i;
		}
	}
	for(int i = minidx; i>bottom;i--){
		swap(i,i-1);
	}
	bottom++;
	min = list[bottom];
	minidx = bottom;
}
	printList();
}

