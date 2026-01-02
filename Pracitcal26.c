#include <stdio.h>

int factorial(int n) {
    int i;
    int fact = 1;

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factorial of %d = %d", number, factorial(number));

    return 0;
}
