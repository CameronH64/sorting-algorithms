#include <iostream>
#include "Bogosort.h"
#include "SelectionSort.h"
using namespace std;

int main() {

	int randomNumbers[] = { 0 };

	SelectionSort selection;

	int size = sizeof(randomNumbers) / sizeof(randomNumbers[0]);

	selection.doSelectionSort(randomNumbers, size);
	selection.printArray(randomNumbers, size);
	cout << endl;


}