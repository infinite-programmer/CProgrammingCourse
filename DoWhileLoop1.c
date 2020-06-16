#include <stdio.h>

int main() {
	int limit, index = 0;

	printf("Enter a limit number: ");
	scanf("%d", &limit);

	do {
		printf("%d", index);
		index = index + 1;
	} while (index < limit);

	return 0;
}