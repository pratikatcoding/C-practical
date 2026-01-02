#include <stdio.h>

int main() {
    float dailyDistance;
    float totalDistance = 0.0;
    int day;

    printf("Enter daily walking distance for 30 days (in kilometers):\n");

    for (day = 1; day <= 30; day++) {
        printf("Day %d distance: ", day);
        scanf("%f", &dailyDistance);

        totalDistance = totalDistance + dailyDistance;
    }

    printf("\nTotal distance walked in the month = %.2f km", totalDistance);

    return 0;
}
