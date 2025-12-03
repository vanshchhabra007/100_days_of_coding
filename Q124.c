Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    char srcFile[100], destFile[100];
    FILE *src, *dest;
    char ch;

    // Take filenames from user
    printf("Enter source file name: ");
    scanf("%s", srcFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    // Open source file in read mode
    src = fopen(srcFile, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file %s\n", srcFile);
        return 1;
    }

    // Open destination file in write mode
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot create destination file %s\n", destFile);
        fclose(src);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully to %s\n", destFile);

    // Close both files
    fclose(src);
    fclose(dest);

    return 0;
}
