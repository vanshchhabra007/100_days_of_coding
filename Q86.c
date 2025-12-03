Q86: Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int i, j, len = 0, isPalindrome = 1;

    // Read string
    fgets(str, sizeof(str), stdin);

    // Calculate length (ignore newline)
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    // Check palindrome
    i = 0;
    j = len - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
