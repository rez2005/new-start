#include <stdio.h>



int rotatematrix(int matrix[][100], int n)
{
    for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - i - 1; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[n - j - 1][i];
            matrix[n - j - 1][i] = matrix[n - i - 1][n - j - 1];
            matrix[n - i - 1][n - j - 1] = matrix[j][n - i - 1];
            matrix[j][n - i - 1] = temp;
        }
    }
    return 0;
}

int main()
{
    int n;
    int matrix[3][100] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    rotatematrix(matrix, 3);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}