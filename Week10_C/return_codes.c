#include <stdio.h>

int divideWithReturn(int a, int b, int *result) {
    if (b == 0) return 0;
    *result = a / b;
    return 1;
}

int main(void) {
    int result;

    if (divideWithReturn(10, 2, &result))
        printf("Division result: %d\n", result);
    else
        printf("Error: Division by zero.\n");

    if (divideWithReturn(10, 0, &result))
        printf("Division result: %d\n", result);
    else
        printf("Error: Division by zero.\n");

    return 0;
}
