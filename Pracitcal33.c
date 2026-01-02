#include <stdio.h>

void factorial(int n, long int *fact) {
    int i;
    *fact = 1;

    for (i = 1; i <= n; i++) {
        *fact = (*fact) * i;
    }
}

int main() {
    int number;
    long int result;

    printf("Enter a number:\n");
    scanf("%d", &number);

    factorial(number, &result);

    printf("\nFactorial of %d = %ld", number, result);

    return 0;
}
