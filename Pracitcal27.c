#include <stdio.h>

int square(int n) {
    return n * n;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Square of %d = %d", number, square(number));

    return 0;
}
