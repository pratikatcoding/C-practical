#include <stdio.h>

int main() {
    int day;

    printf("Enter day number (1 to 6): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday: Mathematics");
            break;
        case 2:
            printf("Tuesday: Digital Electronics");
            break;
        case 3:
            printf("Wednesday: C Programming");
            break;
        case 4:
            printf("Thursday: Data Structures");
            break;
        case 5:
            printf("Friday: Web Development");
            break;
        case 6:
            printf("Saturday: Practical Lab");
            break;
        default:
            printf("Invalid input");
    }

    return 0;
}
