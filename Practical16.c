#include <stdio.h>

int main() {
    int choice;

    printf("Traffic Signal Options:\n");
    printf("1. Red\n2. Yellow\n3. Green\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Red Signal - Stop");
            break;
        case 2:
            printf("Yellow Signal - Ready");
            break;
        case 3:
            printf("Green Signal - Go");
            break;
        default:
            printf("Invalid Choice");
    }

    return 0;
}
