#include <stdio.h>

int main() {
	int limit, index = 1;

	printf("Enter a limitation: ");
	scanf("%d", &limit);

	do {
		printf("%d\n", index);
		index = index + 1;
	} while (index <= limit);

	return 0;
}
