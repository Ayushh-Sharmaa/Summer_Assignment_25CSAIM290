/*
 * Q38: Print reverse pyramid
 * Day-10 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\nReverse Pyramid:\n");
    for (int i = rows; i >= 1; i--) {
        /* Print leading spaces */
        for (int j = rows; j > i; j--) {
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
