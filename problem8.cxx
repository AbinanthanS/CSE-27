#include <stdio.h>

#define ROWS 2
#define COLS 2

int main() {
    int A[ROWS][COLS] = { {3, 4}, {2, 4} };
    int B[ROWS][COLS] = { {1, 2}, {3, 4} };
    int C[ROWS][COLS]; 
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("Result of matrix addition:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}