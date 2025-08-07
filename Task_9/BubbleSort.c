#include <stdio.h>
int main(){
    int elementCount;
    printf("Enter the numbers of elements: ");
    scanf("%d",&elementCount);
    int givenArray[elementCount];
    for(int i = 0; i < elementCount; i++){
        printf("Enter the element [%d]: ", i);
        scanf("%d",&givenArray[i]);
    }
    int unsorted = 1;
    while(unsorted){
        unsorted = 0;
        for(int i = 0; i< elementCount - 1; i++){
            if(givenArray[i] > givenArray[i+1]){
                int temp = givenArray[i+1];
                givenArray[i+1] = givenArray[i];
                givenArray[i] = temp;
                unsorted = 1;
            }
        }
    }
    for(int i = 0; i < elementCount; i++){
        printf("%d", givenArray[i]);
        if (i != elementCount - 1){
            printf(", ");
        }
    }
    return 0;
}