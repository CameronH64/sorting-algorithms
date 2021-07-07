#include "SelectionSort.h"
#include <iostream>
using namespace std;

void SelectionSort::doSelectionSort(int arr[], int size)
{

	int counter = 0;
	int minimum = 0;

	FindMinimum: for (int i = 0; i < size; i++) {

		minimum = arr[i];

		CycleThroughArray: for (int j = counter; j < size; j++) {

			if (arr[j] <= minimum) {

				minimum = arr[j];

			}
			else {

				continue;

			}

			// I now have the smallest element in this array.
			swap(arr, i, j);

		}

		counter++;

	}

}

void SelectionSort::swap(int arr[], int a, int b)
{
	// May need adjustment.
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;

}

void SelectionSort::printArray(int arr[], int size)
{

	for (int i = 0; i < size; i++) {

		cout << arr[i] << ", ";

	}

}
