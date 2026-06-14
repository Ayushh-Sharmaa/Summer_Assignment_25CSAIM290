/*
 * Q24: Find x^n without pow() function
 * Day-6 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int main() {
    double base, result = 1.0;
    int exponent;

    printf("Enter base (x): ");
    scanf("%lf", &base);
    printf("Enter exponent (n): ");
    scanf("%d", &exponent);

    int n = exponent;
    double x = base;

    /* Handle negative exponent */
    if (n < 0) {
        x = 1.0 / x;
        n = -n;
    }

    for (int i = 0; i < n; i++) {
        result *= x;
    }

    printf("%.6lf ^ %d = %.6lf\n", base, exponent, result);

    return 0;
}
