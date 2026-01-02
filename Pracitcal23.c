#include <stdio.h>

int main() {
    int i, j;

    /* (a) Rectangle: 7 columns, 4 rows */
    printf("Rectangle Pattern:\n");
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 7; j++) {
            printf("* ");
        }
        printf("\n");
    }

    /* (b) Square: 4 columns, 4 rows */
    printf("\nSquare Pattern:\n");
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 4; j++) {
            printf("* ");
        }
        printf("\n");
    }

    /* (c) Right-angle triangle */
    printf("\nRight Angle Triangle:\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    /* (d) Reverse right-angle triangle */
    printf("\nReverse Right Angle Triangle:\n");
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    /* (e) Central triangle */
    printf("\nCentral Triangle:\n");
    for (i = 1; i <= 5; i++) {
        for (j = i; j < 5; j++) {
            printf("  ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
