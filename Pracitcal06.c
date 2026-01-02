#include <stdio.h>

int main() {
    float balance1, balance2;

    printf("Enter first account balance: ");
    scanf("%f", &balance1);

    printf("Enter second account balance: ");
    scanf("%f", &balance2);

    if (balance1 > balance2) {
        printf("First account balance is greater");
    } else if (balance2 > balance1) {
        printf("Second account balance is greater");
    } else {
        printf("Both account balances are equal");
    }

    return 0;
}
