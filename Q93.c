Q93: Check if two strings are anagrams of each other.

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0};
    int i = 0;

    // Read two strings
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if any
    for (i = 0; str1[i] != '\0'; i++)
        if (str1[i] == '\n') str1[i] = '\0';
    for (i = 0; str2[i] != '\0'; i++)
        if (str2[i] == '\n') str2[i] = '\0';

    // Count frequency of each character in str1
    for (i = 0; str1[i] != '\0'; i++)
        freq1[(unsigned char)str1[i]]++;

    // Count frequency of each character in str2
    for (i = 0; str2[i] != '\0'; i++)
        freq2[(unsigned char)str2[i]]++;

    // Compare frequency arrays
    for (i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
