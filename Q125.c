Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    char filename[100];
    char text[500];

    // Get the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in append mode
    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }

    // Clear input buffer before fgets
    getchar(); // consume leftover newline from previous input

    // Get the new text from user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append the text to the file
    fprintf(fp, "%s", text);

    // Close the file
    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
