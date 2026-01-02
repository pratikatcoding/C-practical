#include <stdio.h>

int main() {
    int firstNumber, secondNumber;
    int temp;

    printf("Enter the first number: ");
    scanf("%d", &firstNumber);

    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    printf("\nAfter swapping the values are:\n");
    printf("First Number = %d\n", firstNumber);
    printf("Second Number = %d\n", secondNumber);

    return 0;
}
