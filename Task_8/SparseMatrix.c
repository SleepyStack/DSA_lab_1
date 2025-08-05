#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int myMatrix[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter the element [%d][%d]: ", i, j);
            scanf("%d", &myMatrix[i][j]);
        }
    }

    int nonZeroElements = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (myMatrix[i][j] != 0) {
                nonZeroElements += 1;
            }
        }
    }

    int newMatrix[3][nonZeroElements];
    int k = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (myMatrix[i][j] != 0) {
                newMatrix[0][k] = i;
                newMatrix[1][k] = j;
                newMatrix[2][k] = myMatrix[i][j];
                k++;
            }
        }
    }
    printf("\nRow Col Value\n");
    for (int j = 0; j < nonZeroElements; j++) {
        printf("%3d %3d %5d\n", newMatrix[0][j], newMatrix[1][j], newMatrix[2][j]);
    }

    return 0;
}
