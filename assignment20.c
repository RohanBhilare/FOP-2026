#include <stdio.h>

void swapWithPointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapWithoutPointers(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swap (inside function): a = %d, b = %d\n", a, b);
}

int main() {
    int x = 10, y = 20;

    printf("Original values: x = %d, y = %d\n", x, y);

    swapWithPointers(&x, &y);
    printf("After swapWithPointers: x = %d, y = %d\n", x, y);

    swapWithoutPointers(x, y);
    printf("After swapWithoutPointers (main): x = %d, y = %d\n", x, y);

    return 0;
}
