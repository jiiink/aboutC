#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 5

int main(void) {
	int salary[] = { 200, 100, 33, 44, 22 };
	int* current;
	int* endArray;
	int sum = 0;
	for (current = salary, endArray = salary + ARRAY_SIZE; current < endArray; current++) {
		sum += *current;
	}

	printf("Sum = %d\n", sum);

	return 0;
}