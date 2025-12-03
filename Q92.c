Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};  // frequency array for 'a' to 'z'
    int i = 0;

    // Read string
    fgets(str, sizeof(str), stdin);

    // Traverse string to find first repeating lowercase alphabet
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            if (freq[ch - 'a'] == 1) {
                printf("%c", ch);
                return 0; // first repeating found, exit
            } else {
                freq[ch - 'a']++;
            }
        }
        i++;
    }

    printf("No repeating lowercase alphabet found");
    return 0;
}
