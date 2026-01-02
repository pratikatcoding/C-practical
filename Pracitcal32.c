#include <stdio.h>

void calculate(int *a, int *b, int *sum, int *sub, int *mul, float *div) {
    *sum = *a + *b;
    *sub = *a - *b;
    *mul = (*a) * (*b);

    if (*b != 0)
        *div = (float)(*a) / (*b);
    else
        *div = 0;
}

int main() {
    int x, y;
    int sum, sub, mul;
    float div;

    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    calculate(&x, &y, &sum, &sub, &mul, &div);

    printf("\nAddition = %d", sum);
    printf("\nSubtraction = %d", sub);
    printf("\nMultiplication = %d", mul);

    if (y != 0)
        printf("\nDivision = %.2f", div);
    else
        printf("\nDivision not possible (division by zero)");

    return 0;
}
