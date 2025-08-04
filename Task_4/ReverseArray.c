#include <stdio.h>

void main() {
    int elementCount;
    printf("How many elements will be in the array: ");
    scanf("%d",&elementCount);
    int myArray[elementCount];
    for(int i = 0; i< elementCount; i++){
        printf("Enter Element %d: ",i);
        scanf("%d", &myArray[i]);
    }
    int left = 0;
    int right = elementCount - 1;
    for(int i = 0; i <= elementCount/2; i++){
        int temp = myArray[right];
        myArray[right] = myArray[left];
        myArray[left] = temp;
        left++;
        right--;
    }
    for(int i = 0; i< elementCount; i++){
        printf("%d: ",myArray[i]);
    }
}
