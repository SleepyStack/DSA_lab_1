#include <stdio.h>

int main() {
    int elementCount;
    printf("How many elements will be in the array: ");
    scanf("%d",&elementCount);
    int myArray[elementCount];
    for(int i = 0; i< elementCount; i++){
        printf("Enter Element %d: ",i);
        scanf("%d", &myArray[i]);
    }
    int arraySum = 0;
    for(int i = 0; i<elementCount; i++){
        arraySum += myArray[i];
    }
    printf("The Sum is: %d",arraySum);
    return 0;
}
