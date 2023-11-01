#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacity = 2;
    int *arr = (int *)malloc(capacity * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    int count = 0;

    printf("Enter the elements of the array, to exit enter 0:\n");
    int value;
    while (1) {
        scanf("%d", &value);
        if (value == 0) {
            break;
        }

        if (count >= capacity) {
            capacity *= 2;
            arr = (int *)realloc(arr, capacity * sizeof(int));
            if (arr == NULL) {
                printf("Memory reallocation failed.\n");
                return 1;
            }
        }

        arr[count] = value;
        count++;
    }

    printf("Array before sorting:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < count - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < count; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    printf("\nArray after sorting:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
