#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if ((a > b) && (a > 0)) {
        printf("Result = 1 (Condition is true)");
    } else {
        printf("Result = 0 (Condition is false)");
    }

    return 0;
}
