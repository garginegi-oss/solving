// Marksheet Generation System

#include <stdio.h>

int main()
{
    char name[50];
    int rollNo;
    float english, maths, science, computer, hindi;
    float total, percentage;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter marks in English: ");
    scanf("%f", &english);

    printf("Enter marks in Maths: ");
    scanf("%f", &maths);

    printf("Enter marks in Science: ");
    scanf("%f", &science);

    printf("Enter marks in Computer: ");
    scanf("%f", &computer);

    printf("Enter marks in Hindi: ");
    scanf("%f", &hindi);

    total = english + maths + science + computer + hindi;
    percentage = total / 5;

    printf("\n========== MARKSHEET ==========\n");

    printf("Name       : %s\n", name);
    printf("Roll No    : %d\n", rollNo);

    printf("\nEnglish    : %.2f\n", english);
    printf("Maths      : %.2f\n", maths);
    printf("Science    : %.2f\n", science);
    printf("Computer   : %.2f\n", computer);
    printf("Hindi      : %.2f\n", hindi);

    printf("\nTotal Marks : %.2f\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    if(percentage >= 90)
        printf("Grade : A+\n");
    else if(percentage >= 75)
        printf("Grade : A\n");
    else if(percentage >= 60)
        printf("Grade : B\n");
    else if(percentage >= 40)
        printf("Grade : C\n");
    else
        printf("Grade : Fail\n");

    return 0;
}