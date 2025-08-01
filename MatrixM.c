#include <stdio.h>

#define ROWS1 3
#define COLS1 2 // Also ROWS2
#define COLS2 3

int main() {
    int matrix1[ROWS1][COLS1] = {{1, 2}, {3, 4}, {5, 6}};
    int matrix2[COLS1][COLS2] = {{7, 8, 9}, {10, 11, 12}};
    int resultMatrix[ROWS1][COLS2];
    int i, j, k;

    // Perform matrix multiplication
    for (i = 0; i < ROWS1; i++) {
        for (j = 0; j < COLS2; j++) {
            resultMatrix[i][j] = 0; // Initialize element to 0
            for (k = 0; k < COLS1; k++) {
                resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result matrix
    printf("Resultant Matrix (Matrix1 * Matrix2):\n");
    for (i = 0; i < ROWS1; i++) {
        for (j = 0; j < COLS2; j++) {
            printf("%d\t", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}