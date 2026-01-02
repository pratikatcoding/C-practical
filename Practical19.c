#include <stdio.h>

int main() {
    float dailyUsage, totalUsage = 0;
    int day;

    for (day = 1; day <= 7; day++) {
        printf("Enter electricity usage for day %d (in units): ", day);
        scanf("%f", &dailyUsage);
        totalUsage += dailyUsage;
    }

    printf("Total Weekly Electricity Consumption = %.2f units", totalUsage);

    return 0;
}
