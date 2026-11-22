//checking wheater the string are rotation of each other?
#include <stdio.h>
#include <string.h>

int isRotation(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Lengths must be equal
    if (len1 != len2) return 0;

    // Create a new string str1+str1
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is substring of temp
    return strstr(temp, str2) != NULL;
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (isRotation(str1, str2))
        printf("Yes, strings are rotations of each other.\n");
    else
        printf("No, strings are not rotations of each other.\n");

    return 0;
}
