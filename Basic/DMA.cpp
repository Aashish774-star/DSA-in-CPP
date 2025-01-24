#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        for (int j = 2; j * j <= arr[i]; j++) {
            if (arr[i] % j == 0) goto next;
        }
        if (arr[i] > 1) sum += arr[i];
        next:;
    }

    printf("Sum = %d\n", sum);

    free(arr);

    return 0;
}