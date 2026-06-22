/*
 * Q39: Print number pyramid: 1 / 121 / 12321 / 1234321 / 123454321
 * Day-10 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\nNumber Pyramid:\n");
    for (int i = 1; i <= rows; i++) {
        /* Leading spaces */
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        /* Ascending numbers */
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        /* Descending numbers (excluding middle) */
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
