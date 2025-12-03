Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

#include <stdio.h>

int main() {
    char name[50];
    int age;

    // Take user input
    printf("Enter Name: ");
    scanf("%s", name);   // For single word name
    printf("Enter Age: ");
    scanf("%d", &age);

    // Open file in write mode
    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write name and age to file
    fprintf(fp, "Name: %s, Age: %d\n", name, age);

    // Close the file
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
