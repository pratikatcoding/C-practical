#include <stdio.h>

int main() {
    int attendance;
    int presentCount = 0;
    int day;

    printf("Enter attendance for 30 days (1 = Present, 0 = Absent):\n");

    for (day = 1; day <= 30; day++) {
        printf("Day %d: ", day);
        scanf("%d", &attendance);

        if (attendance == 1) {
            presentCount++;
        }
    }

    printf("\nTotal number of present days = %d", presentCount);

    return 0;
}
