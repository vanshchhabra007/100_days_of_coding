Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char s[]) {
    int lastIndex[256]; 
    for(int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0, start = 0;

    for(int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if(lastIndex[ch] >= start) {
            // Repeating character found
            start = lastIndex[ch] + 1;
        }

        lastIndex[ch] = i;

        int currLen = i - start + 1;
        if(currLen > maxLen)
            maxLen = currLen;
    }

    return maxLen;
}

int main() {
    char s[1000];
    printf("Enter string: ");
    scanf("%s", s);

    printf("%d", lengthOfLongestSubstring(s));
    return 0;
}
