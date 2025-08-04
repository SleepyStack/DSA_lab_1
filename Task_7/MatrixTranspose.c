#include <stdio.h>

int main() {
    int matrix[2][2], transpose[2][2];

    printf("Enter elements of 2x2 matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nTranspose of Matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
