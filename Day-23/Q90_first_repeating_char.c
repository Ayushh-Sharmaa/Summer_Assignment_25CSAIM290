/*
 * Q90: Find first repeating character in a string
 * Day-23 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int main() {
    char str[200];
    int freq[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') len++;
    str[len] = '\0';

    /* Find first character that appears more than once */
    int found = 0;
    for (int i = 0; i < len; i++) {
        unsigned char c = str[i];
        freq[c]++;
        if (freq[c] == 2) {
            /* This is the second occurrence, meaning it repeats */
            /* Find its first occurrence */
            for (int j = 0; j < i; j++) {
                if (str[j] == str[i]) {
                    printf("First repeating character: '%c' (first at index %d)\n", str[i], j);
                    found = 1;
                    break;
                }
            }
            if (found) break;
        }
    }

    if (!found) {
        printf("No repeating character found.\n");
    }

    return 0;
}
