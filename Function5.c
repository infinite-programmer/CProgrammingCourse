#include <stdio.h>

int takenum();

int main() {
    int number = takenum();

    printf("The number you've entered is %d", number);

    return 0;
}

int takenum() {
    int num;    
    
    printf("Enter a number: ");
    scanf("%d", &num);

    return num;
}