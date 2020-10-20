#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#pragma once

using namespace std;

class sorts {
public:
	void initialize();
	void Bubble();
	void Selection();
	void Insertion();
	void printList( int x, int y);
	void printList();
	int swap(int x, int y);
	void scramble();
	int list[20];
private:

};
