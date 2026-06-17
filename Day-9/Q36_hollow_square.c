/*
 * Q36: Print hollow square pattern
 * Day-9 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int main() {
    int n;

    printf("Enter size of hollow square: ");
    scanf("%d", &n);

    printf("\nHollow Square Pattern:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            /* Print * only on border */
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
