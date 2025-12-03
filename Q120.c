Q120: Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>  // for toupper and tolower

int main() {
    char str[500];
    int i;

    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    // Capitalize first character if it's a letter
    if (str[0] != '\0' && isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    // Traverse the string
    for (i = 1; str[i] != '\0'; i++) {
        // If previous character is space, capitalize current if it's a letter
        if (str[i-1] == ' ' && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]); // optional: make other letters lowercase
        }
    }

    printf("\nOutput:\n%s\n", str);

    return 0;
}
