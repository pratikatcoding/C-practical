#include <stdio.h>

int main() {
    int number = 25;
    float percentage = 82.5;
    char grade = 'A';
    double salary = 45678.75;

    printf("Integer value = %d\n", number);
    printf("Size of integer = %lu bytes\n\n", sizeof(number));

    printf("Float value = %.2f\n", percentage);
    printf("Size of float = %lu bytes\n\n", sizeof(percentage));

    printf("Character value = %c\n", grade);
    printf("Size of char = %lu byte\n\n", sizeof(grade));

    printf("Double value = %.2lf\n", salary);
    printf("Size of double = %lu bytes\n", sizeof(salary));

    return 0;
}
