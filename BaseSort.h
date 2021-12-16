/*

	This is a derived class for all sorting algorithms because
	I don't want to code the same basic features for each sorting algorithm.
	So, inheriting basic methods from a derived class should give some flexibility that I need.

*/

#ifndef BASESORT
#define BASESORT
class BaseSort
{

public:

	int arraySize1[10];
	int arraySize2[1000];
	int arraySize3[100000];
	int arraySize4[1000000];
	int arraySize5[100000000];


public:

	void randomizeArray(int arr);
	void printArray(int arr[], int size);
	// Will likely add more methods later. For now, this should suffice.

};

#endif