Q83: Count vowels and consonants in a string.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;

    // Read string
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z') { // check if alphabet
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}
