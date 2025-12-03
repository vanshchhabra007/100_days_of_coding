Q143: Find and print the student with the highest marks.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n, i, topIndex = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);

        // Track topper
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    // Output topper details
    printf("\nTopper: %s (Marks: %.2f)\n", s[topIndex].name, s[topIndex].marks);

    return 0;
}
