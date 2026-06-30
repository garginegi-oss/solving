// Student Management System using Functions

#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

void displayStudent(struct Student s)
{
    printf("\nRoll Number : %d\n", s.rollNo);
    printf("Name        : %s\n", s.name);
    printf("Marks       : %.2f\n", s.marks);
}

int main()
{
    struct Student students[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n========== STUDENT REPORT ==========\n");

    for(i = 0; i < n; i++)
    {
        displayStudent(students[i]);
    }

    return 0;
}