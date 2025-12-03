Q144: Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function that accepts structure as parameter
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student st;

    // Taking input
    scanf("%s %d %f", st.name, &st.roll, &st.marks);

    // Calling function
    printStudent(st);

    return 0;
}
