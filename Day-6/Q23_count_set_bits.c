/*
 * Q23: Count set bits in a number
 * Day-6 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    int temp = n;
    while (temp != 0) {
        if (temp & 1) {
            count++;
        }
        temp >>= 1;
    }

    printf("Number of set bits in %d = %d\n", n, count);

    return 0;
}
