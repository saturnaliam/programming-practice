#include <iostream>

int reduceToZero(int num) {
	int steps = 0;

	while (num != 0) {
		num = (num % 2 == 0) ? num / 2 : num - 1;
		steps++;
	}

	return steps;
}

int main() {
	int input = 4;

	printf("It takes %d steps to reach 0!", reduceToZero(input));
}
