#include <stdio.h>

int main() {
    int value = 10;

    printf("Initial value = %d\n", value);

    printf("Pre Increment = %d\n", ++value);
    printf("After Pre Increment value = %d\n", value);

    printf("Post Increment = %d\n", value++);
    printf("After Post Increment value = %d\n", value);

    printf("Pre Decrement = %d\n", --value);
    printf("After Pre Decrement value = %d\n", value);

    printf("Post Decrement = %d\n", value--);
    printf("Final value = %d\n", value);

    return 0;
}
