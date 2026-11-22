//print all substrings of the string?
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

                                // Outer loop: starting index
    for (i = 0; i < len; i++) {
                               // Inner loop: ending index
        for (j = 0; j < len; j++) {
                              // Print substring from i to j
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
