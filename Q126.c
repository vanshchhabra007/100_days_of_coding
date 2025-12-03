Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include <stdio.h>

int main() {
    char filename[100];
    char ch;

    // Ask for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try to open file in read mode
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");
    printf("File contents:\n");

    // Read and display file content
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // Close file
    fclose(fp);

    return 0;
}
