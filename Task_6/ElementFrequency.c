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
    int checkElement;
    printf("Enter the number you want to check the frequency of: ");
    scanf("%d",&checkElement);
    int elementCounter = 0;
    for(int i = 0; i< elementCount; i++){
        if(checkElement == myArray[i]){
            elementCounter += 1;
        }
    }
    printf("Occurance of %d in given array is: %d",checkElement,elementCounter);
    return 0;
}
