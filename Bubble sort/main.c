#include <stdio.h>

int main() {
    int arr[] = {64, 5, 52, 32, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array before sort: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nArray after sort: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
