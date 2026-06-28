/*
 * Q70: Selection sort
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

    /* Selection sort: find minimum and place at correct position */
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        /* Swap arr[i] with arr[minIdx] */
        if (minIdx != i) {
            int temp    = arr[i];
            arr[i]      = arr[minIdx];
            arr[minIdx] = temp;
        }
    }

    printf("Sorted array (ascending): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
