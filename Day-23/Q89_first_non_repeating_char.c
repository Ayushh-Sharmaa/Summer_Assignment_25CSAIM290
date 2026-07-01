/*
 * Q89: Find first non-repeating character in a string
 * Day-23 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int main() {
    char str[200];
    int freq[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    /* Trim newline */
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') len++;
    str[len] = '\0';

    /* Build frequency table */
    for (int i = 0; i < len; i++) {
        freq[(unsigned char)str[i]]++;
    }

    /* Find first character with frequency 1 */
    int found = 0;
    for (int i = 0; i < len; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character: '%c' at index %d\n", str[i], i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No non-repeating character found.\n");
    }

    return 0;
}
