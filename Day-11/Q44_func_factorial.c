/*
 * Q44: Function to find factorial
 * Day-11 | Admission No: 25CSAIM290
 */

#include <stdio.h>

long long calcFactorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is undefined for negative numbers.\n");
    } else {
        printf("Factorial of %d = %lld\n", n, calcFactorial(n));
    }

    return 0;
}
