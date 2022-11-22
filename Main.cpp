#include <iostream>


void quicksort(int * arr, int start, int end) {

	if (start >= end) {
		return;
	}

	int pivot = arr[end];
	int running_index = start;
	int temp;

	for (int i = start; i < end; ++i) {
		if (arr[i] <= pivot) {
			running_index++;
		}
	}
	std::swap(arr[running_index], arr[end]);

	quicksort(arr, start, running_index - 1);
	quicksort(arr, running_index + 1, end);
}

int main() {

	//Testing quicksort
	int n = 5;
	int test[] = { 4, 2, 3, 1, 6, 5 };


	std::cout << "Initial Array" << std::endl;
	for (auto ele : test) {
		std::cout << ele << ", " << std::endl;
	}
	std::cout << test << std::endl;

	std::cout << "Calling Quicksort" << std::endl;
	quicksort(test, 0, n);

	std::cout << "Result" << std::endl;
	for (auto ele : test) {
		std::cout << ele << ", " << std::endl;
	}

	return 0;
}