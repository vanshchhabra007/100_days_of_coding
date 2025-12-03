Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    FILE *fp;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Take student details as input
    for (i = 0; i < n; i++) {
        printf("Enter Name of Student %d: ", i + 1);
        scanf("%s", students[i].name);  // single word name
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Enter Marks: ");
        scanf("%d", &students[i].marks);
    }

    // Store records in a file
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        fprintf(fp, "%s %d %d\n", students[i].name, students[i].roll, students[i].marks);
    }

    fclose(fp);

    // Read and display records
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    while (fscanf(fp, "%s %d %d", students[0].name, &students[0].roll, &students[0].marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", students[0].name, students[0].roll, students[0].marks);
    }

    fclose(fp);

    return 0;
}
