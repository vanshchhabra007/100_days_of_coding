Q150: Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>
#include <string.h>

// Define Student structure
struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s; // Pointer to struct

    // Modify data using pointer
    printf("Enter Student Details (Name Roll Marks): ");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    // Display modified data
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", ptr->name, ptr->roll, ptr->marks);

    return 0;
}
