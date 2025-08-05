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
    
    int key;
    int matchIndex = -1;
    printf("Enter the key to be searched: ");
    scanf("%d",&key);
    for(int i = 0; i < elementCount; i++){
        if(key == myArray[i]){
            matchIndex = i;
            break;
        }
    }
    if(matchIndex != -1){
        printf("The key's first occurance was found at index: %d", matchIndex);
    }else{
        printf("The key was not found in the given array.");
    }
    return 0;
}
