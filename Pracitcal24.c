#include <stdio.h>

int main() {
    int choice, number, i;

    do {
        printf("\nMenu:\n");
        printf("1. Print Multiplication Table\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter a number: ");
            scanf("%d", &number);

            for (i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", number, i, number * i);
            }
        }

    } while (choice != 0);

    printf("Program Exited");

    return 0;
}
