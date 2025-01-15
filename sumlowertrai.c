#include <stdio.h>
// Function to read matrix elements
void readMatrix(int matrix[10][10], int row, int col) 
{
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}
// Function to write matrix elements
void writeMatrix(int matrix[10][10], int row, int col) 
{
    printf("Matrix:\n");
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
// Function to check if matrix is lower triangular
int isLowerTriangular(int matrix[10][10], int row, int col) 
{
    for (int i = 0; i < row; i++) {
        for (int j = i + 1; j < col; j++) 
        {
            if (matrix[i][j] != 0) 
            {
                return 0; // Not lower triangular
            }
        }
    }
    return 1; // Lower triangular
}
// Function to calculate sum of elements below diagonal
int sumBelowDiagonal(int matrix[10][10], int row, int col) 
{
    int sum = 0;
    for (int i = 1; i < row; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}
int main() 
{
    int matrix[10][10];
    int row, col;
    printf("Enter number of rows (max 10): ");
    scanf("%d", &row);
    printf("Enter number of columns (max 10): ");
    scanf("%d", &col);
    // Validate row and column inputs
    if (row < 1 || row > 10 || col < 1 || col > 10) 
    {
        printf("Invalid row or column input. Exiting...\n");
        return 1;
    }
    // Read matrix elements
    readMatrix(matrix, row, col);
    // Write matrix elements
    writeMatrix(matrix, row, col);
    // Check if matrix is lower triangular
    if (isLowerTriangular(matrix, row, col)) 
    {
        printf("Matrix is lower triangular.\n");
        // Calculate sum of elements below diagonal
        int sum = sumBelowDiagonal(matrix, row, col);
        printf("Sum of elements below diagonal: %d\n", sum);
    } 
    else 
    {
        printf("Matrix is not lower triangular.\n");
    }
    return 0;
}
