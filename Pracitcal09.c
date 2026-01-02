#include <stdio.h>

int main() {
    float initialBalance, interestAmount, finalBalance;

    printf("Enter initial bank balance: ");
    scanf("%f", &initialBalance);

    interestAmount = initialBalance * 0.05;
    finalBalance = initialBalance + interestAmount;

    printf("Interest Amount = %.2f\n", interestAmount);
    printf("Final Balance = %.2f\n", finalBalance);

    return 0;
}
