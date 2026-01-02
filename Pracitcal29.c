#include <stdio.h>

float calculateAverage(int m1, int m2, int m3) {
    return (m1 + m2 + m3) / 3.0;
}

int main() {
    int m1, m2, m3;
    float avg;

    printf("Enter marks of three subjects:\n");
    scanf("%d %d %d", &m1, &m2, &m3);

    avg = calculateAverage(m1, m2, m3);

    printf("Average = %.2f\n", avg);

    if (avg >= 90)
        printf("Grade A");
    else if (avg >= 80)
        printf("Grade B");
    else if (avg >= 70)
        printf("Grade C");
    else if (avg >= 60)
        printf("Grade D");
    else
        printf("Grade F");

    return 0;
}
