#include <stdio.h>

int main() {
    float units, billAmount;

    printf("Enter total units consumed: ");
    scanf("%f", &units);

    if (units <= 100) {
        billAmount = units * 1.5;
    } else if (units <= 200) {
        billAmount = (100 * 1.5) + ((units - 100) * 2.0);
    } else {
        billAmount = (100 * 1.5) + (100 * 2.0) + ((units - 200) * 3.0);
    }

    printf("Total Electricity Bill = %.2f", billAmount);

    return 0;
}
