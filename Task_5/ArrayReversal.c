#include <stdio.h>

int main() {
    int elementCount;
    printf("How many elements will be in the array: ");
    scanf("%d", &elementCount);

    int myArray[elementCount];
    for (int i = 0; i < elementCount; i++) {
        printf("Enter Element %d: ", i);
        scanf("%d", &myArray[i]);
    }

    int left = 0;
    int right = elementCount - 1;
    while (left < right) {
        int temp = myArray[left];
        myArray[left] = myArray[right];
        myArray[right] = temp;
        left++;
        right--;
    }

    printf("Reversed array: ");
    for (int i = 0; i < elementCount; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}
