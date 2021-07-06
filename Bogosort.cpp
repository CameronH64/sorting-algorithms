#include "Bogosort.h"
#include <iostream>
#include <algorithm>
using namespace std;

void Bogosort::doBogosort(int arr[], int size)
{

	int counter = 0;

	while (validateArray(arr, size) != true) {

		shuffleArray(arr, size);

		cout << "Shuffle count: " << ++counter << endl;

		cout << "Array: ";

		for (int i = 0; i < size; i++) {

			cout << arr[i] << ", ";

		}


	}

	cout << endl << endl;

}

void Bogosort::shuffleArray(int arr[], int size)
{
	// create and initialize an array                                                                                                   

	random_shuffle(arr, arr + size);
		
}

bool Bogosort::validateArray(int arr[], int size)
{

	if (size == 0 || size == 1)
		return true;

	for (int i = 1; i < size; i++)

		// Unsorted pair found
		if (arr[i - 1] > arr[i])
			return false;

	// No unsorted pair found
	return true;

}





/*
	// copy the contents of the array to output
	std::copy(arr, arr + SIZE, std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	// shuffling an std:: container, here it's std::vector
	std::vector<int> ivec(arr, arr + SIZE);
	std::random_shuffle(ivec.begin(), ivec.end());
	std::copy(ivec.begin(), ivec.end(), std::ostream_iterator<int>(std::cout, " "));
	*/