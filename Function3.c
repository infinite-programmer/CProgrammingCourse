#include <stdio.h>

int sum(int a, int b);

int main() {
    int summation = sum(5, 7);
    printf("%d", summation);

    return 0;
}

int sum(int a, int b) {
    return a + b;
}
