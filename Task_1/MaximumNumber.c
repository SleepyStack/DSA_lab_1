#include <stdio.h>
#include <limits.h>
int main() {
    int elementCount;
    printf("How many elements will be in the array: ");
    scanf("%d",&elementCount);
    int myArray[elementCount];
    for(int i = 0; i< elementCount; i++){
        printf("Enter Element %d: ",i);
        scanf("%d", &myArray[i]);
    }
    int maxValue = INT_MIN;
    for(int i = 0; i < elementCount; i++){
        if(maxValue < myArray[i]){
            maxValue = myArray[i];
        }
    }
    printf("The biggest number in the matrix is: %d", maxValue);
    return 0;
}
