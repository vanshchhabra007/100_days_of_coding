Q95: Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    int len1 = strlen(str1), len2 = strlen(str2);

    // Remove newline characters
    if (str1[len1 - 1] == '\n') { str1[len1 - 1] = '\0'; len1--; }
    if (str2[len2 - 1] == '\n') { str2[len2 - 1] = '\0'; len2--; }

    // Lengths must be same
    if (len1 != len2) {
        printf("Not rotation");
        return 0;
    }

    // Concatenate str1 with itself
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is substring of temp
    if (strstr(temp, str2) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
