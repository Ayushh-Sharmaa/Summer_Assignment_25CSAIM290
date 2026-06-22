/*
 * Q37: Print star pyramid (centered)
 * Day-10 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\nStar Pyramid:\n");
    for (int i = 1; i <= rows; i++) {
        /* Print spaces */
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        /* Print stars */
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
