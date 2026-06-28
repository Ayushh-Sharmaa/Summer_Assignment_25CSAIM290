/*
 * Q78: Check if a matrix is symmetric
 * Day-20 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int main() {
    int n;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int mat[n][n];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    /* A matrix is symmetric if mat[i][j] == mat[j][i] for all i, j */
    int isSymmetric = 1;
    for (int i = 0; i < n && isSymmetric; i++) {
        for (int j = 0; j < n && isSymmetric; j++) {
            if (mat[i][j] != mat[j][i]) {
                isSymmetric = 0;
            }
        }
    }

    if (isSymmetric) {
        printf("The matrix is Symmetric.\n");
    } else {
        printf("The matrix is NOT Symmetric.\n");
    }

    return 0;
}
