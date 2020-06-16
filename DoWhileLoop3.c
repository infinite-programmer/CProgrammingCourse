#include <stdio.h>

int main() {
	int multiplicationNum, count = 1, limit = 11;

	printf("Enter the multiplication number: ");
	scanf("%d", &multiplicationNum);

	do {
		printf("%d x %d = %d\n", multiplicationNum, count, multiplicationNum * count);
		count = count + 1;
	} while (count < limit);

	return 0;
}