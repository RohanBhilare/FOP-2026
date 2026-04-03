#include <stdio.h>

long long recursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * recursive(n - 1);
    }
}

int main() {
    int n, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    } else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial (non-recursive) of %d = %llu\n", n, fact);
        printf("Factorial (recursive) of %d = %llu\n", n, recursive(n));
    }

    return 0;
}
