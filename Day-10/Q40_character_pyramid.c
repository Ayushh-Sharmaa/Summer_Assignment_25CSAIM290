/*
 * Q40: Print character pyramid: A / ABA / ABCBA / ABCDCBA / ABCDEDCBA
 * Day-10 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\nCharacter Pyramid:\n");
    for (int i = 1; i <= rows; i++) {
        /* Leading spaces */
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        /* Ascending characters */
        for (int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        /* Descending characters (excluding peak) */
        for (int j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
