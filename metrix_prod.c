#include <stdio.h>
int main() {
    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[2][2] = {{5, 6}, {7, 8}};
    int prod[2][2];
    int i, j, k;
    printf("Matrix 1:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            prod[i][j] = 0;
            for (k = 0; k < 2; k++) {
                prod[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Product of matrices:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }
    return 0;
}