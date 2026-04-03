#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, even_count = 0, odd_count = 0;

    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    int *even = (int *)malloc(n * sizeof(int));
    int *odd = (int *)malloc(n * sizeof(int));

    if (arr == NULL || even == NULL || odd == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[even_count++] = arr[i];
        } else {
            odd[odd_count++] = arr[i];
        }
    }

    printf("\nEven numbers: ");
    for (i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }

    printf("\nOdd numbers: ");
    for (i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }

    free(arr);
    free(even);
    free(odd);

    return 0;
}
