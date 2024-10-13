//transpose of matrix
#include <stdio.h>
void transpose(int rows, int cols, int matrix[rows][cols]) 
{
    int transposedMatrix[cols][rows];
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }
    printf("Transposed matrix:\n");
    for (int i = 0; i < cols; i++) 
    {
        for (int j = 0; j < rows; j++) 
        {
            printf("%d ", transposedMatrix[i][j]);
        }
        printf("\n");
    }
}
int main() 
{
    int rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    transpose(rows, cols, matrix);
    return 0;
}