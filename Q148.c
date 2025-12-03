Q148: Take two structs as input and check if they are identical.

#include <stdio.h>
#include <string.h>

// Define Student structure
struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to compare two students
int areStudentsSame(struct Student s1, struct Student s2) {
    return (strcmp(s1.name, s2.name) == 0 && s1.roll == s2.roll && s1.marks == s2.marks);
}

int main() {
    struct Student s1, s2;

    // Input Student 1
    printf("Enter details of Student 1 (Name Roll Marks): ");
    scanf("%s %d %d", s1.name, &s1.roll, &s1.marks);

    // Input Student 2
    printf("Enter details of Student 2 (Name Roll Marks): ");
    scanf("%s %d %d", s2.name, &s2.roll, &s2.marks);

    // Compare and print result
    if (areStudentsSame(s1, s2)) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }

    return 0;
}
