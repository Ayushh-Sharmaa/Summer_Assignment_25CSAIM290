/*
 * Q34: Print reverse number triangle: 12345 / 1234 / 123 / 12 / 1
 * Day-9 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\nReverse Number Triangle:\n");
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
