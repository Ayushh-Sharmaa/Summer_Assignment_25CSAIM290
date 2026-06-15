/*
 * Q27: Recursive sum of digits
 * Day-7 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int sumOfDigits(int n) {
    if (n < 0) n = -n;
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Sum of digits of %d = %d\n", n, sumOfDigits(n));

    return 0;
}
