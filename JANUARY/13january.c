//multic of a matrix
#include <stdio.h>
void matrix_multiply(int a[][3], int b[][3], int c[][3], int m, int n, int p) 
{
    int i, j, k;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++) 
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++) 
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() 
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int c[3][3];

    matrix_multiply(a, b, c, 3, 3, 3);

    int i, j;
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}