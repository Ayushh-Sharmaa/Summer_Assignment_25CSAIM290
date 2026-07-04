/*
 * Q99: Sort names alphabetically
 * Day-25 | Admission No: 25CSAIM290
 */

#include <stdio.h>
#include <string.h>

int main() {
    int n;

    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar(); /* consume newline */

    char names[n][100];

    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(names[i], 100, stdin);
        /* Trim newline */
        int len = 0;
        while (names[i][len] != '\0' && names[i][len] != '\n') len++;
        names[i][len] = '\0';
    }

    /* Bubble sort alphabetically */
    char temp[100];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("Names in alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
