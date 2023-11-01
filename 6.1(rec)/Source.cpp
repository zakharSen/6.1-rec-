#include <iostream>
#include <cmath>
#include <random>
#include <cstdlib>
#include <ctime>

using namespace std;

void printArray(int* arr, int size, int i);
void generateArray(int* arr, int size, int low, int high, int i);
int countElements(int* arr, int size, int index, int count);
int sumElements(int* arr, int size, int index, int sum);
void replaceElements(int* arr, int size, int index);

int main() {
	const int arrSize = 22;
	int t[arrSize];

	generateArray(t, arrSize, -20, 37, 0);

	cout << "Original array: ";
	printArray(t, arrSize, 0);

	cout << "Number of elemnts: " << countElements(t, arrSize, 0, 0) << endl;

	cout << "Sum of elements: " << sumElements(t, arrSize, 0, 0) << endl;

	replaceElements(t, arrSize, 0);

	std::cout << "Modified: ";
	printArray(t, arrSize, 0);

	return 0;
}

void generateArray(int* arr, int size, int low, int high, int i) {
	if (i < size) {
		arr[i] = low + rand() % (high - low + 1);
		generateArray(arr, size, low, high, i + 1);
	}
}

void printArray(int* arr, int size, int i) {
	if (i < size) {
		cout << arr[i] << " ";
		printArray(arr, size, i + 1);
	}
	else {
		cout << endl;
		return;
	}

}

int sumElements(int* arr, int size, int index, int sum) {
	if (index == size) {
		return sum;
	}
	if (arr[index] < 0 && arr[index] % 5 != 0)
	{
		sum += arr[index];
	};
	return sumElements(arr, size, index + 1, sum);
}

int countElements(int* arr, int size, int index, int count) {
	if (index == size)
	{
		return count;
	};
	if (arr[index] < 0 && arr[index] % 5 != 0) {
		count++;
	};
	return countElements(arr, size, index + 1, count);
}

void replaceElements(int* arr, int size, int index) {
	if (index == size) {
		return;
	}
	if (arr[index] < 0 && arr[index] % 5 != 0) {
		arr[index] = 0;
	}
	replaceElements(arr, size, index + 1);
}