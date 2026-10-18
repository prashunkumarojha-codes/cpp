#include <algorithm>
#include <iostream>

int main() {
	int numbers[] = {5, 2, 8, 1, 3};
	const int size = sizeof(numbers) / sizeof(numbers[0]);

	std::sort(numbers, numbers + size);

	std::cout << "Sorted array: ";
	for (int number : numbers) {
		std::cout << number << ' ';
	}
	std::cout << '\n ';

	return 0;
}
