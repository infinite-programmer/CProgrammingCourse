#include <stdio.h>

int main() {
	int i = 0, j;

	for (j = 0; i < 4;) {
		printf("%d %d\n", i, j);
		j++;i++;
	}

	return 0;
}