/*
 * Q32: Print repeated number pattern: 1 / 22 / 333 / 4444 / 55555
 * Day-8 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\nRepeated Number Pattern:\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
