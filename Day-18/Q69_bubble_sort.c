/*
 * Q69: Bubble sort
 * Day-18 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* Bubble sort: repeatedly push largest to end */
    for (int pass = 0; pass < n - 1; pass++) {
        int swapped = 0;
        for (int j = 0; j < n - pass - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp    = arr[j];
                arr[j]      = arr[j + 1];
                arr[j + 1]  = temp;
                swapped     = 1;
            }
        }
        if (!swapped) break; /* Already sorted */
    }

    printf("Sorted array (ascending): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
