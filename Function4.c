#include <stdio.h>

void printstar(int s);

int main() {
    printstar(8);

    return 0;
}

void printstar(int s) {
    for (int i = 0; i < s; i++) {
        printf("%c", '*');
    }
}