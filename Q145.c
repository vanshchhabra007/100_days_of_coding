Q145: Return a structure containing top student's details from a function.

#include <stdio.h>
#include <string.h>

// Define Student structure
struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to find the student with highest marks
struct Student getTopStudent(struct Student students[], int n) {
    struct Student top = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks > top.marks) {
            top = students[i];
        }
    }
    return top;
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("Enter Name, Roll, Marks of Student %d: ", i + 1);
        scanf("%
