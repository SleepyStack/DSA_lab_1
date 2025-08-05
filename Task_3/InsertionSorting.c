#include <stdio.h>

int main() {
    int elementCount;
    printf("Enter number of elements: ");
    scanf("%d", &elementCount);
    int arr[elementCount];
    for (int i = 0; i < elementCount; i++) {
        printf("Enter Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < elementCount; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    printf("Sorted array:\n");
    for (int i = 0; i < elementCount; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
