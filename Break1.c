#include <stdio.h>

int main() {
	char letter;

	while (1) {
		if (letter == 'M') {
			break;
		}
		else {
			printf("Enter a letter: ");
			scanf(" %c", &letter);
		}
	}

	return 0;
}