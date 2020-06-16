#include <stdio.h>

int main() {
	int i, num;

	for (i = 0; i < 4; i++) {
		printf("Enter a number: ");
		scanf("%d", &num);

		if (num == 5) {
			continue;
		}

		printf("Hi! Rifat!\n");
	}

	return 0;
}