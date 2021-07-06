#include <iostream>
#include "Bogosort.h"
using namespace std;

void displayArray(int arr[], int size) {

	// Now, do the for loop that outputs the array to the screen.
	for (int i = 0; i < size; i++) {

		cout << arr[i] << ", ";

	}

	cout << endl << endl;

}

int main() {

	int randomNumbers1[] = { 7, 13, 10, 19, 21 };
	int randomNumbers2[] = { 7, 13, 10, 19, 21, 5, 12, 15 };
	int randomNumbers3[] = { 7, 13, 10, 19, 21, 5, 12, 15, 18, 11, 3, 4 };

	Bogosort instance;

	int size = sizeof(randomNumbers3) / sizeof(randomNumbers3[0]);

	instance.doBogosort(randomNumbers3, size);

	displayArray(randomNumbers3, size);

}