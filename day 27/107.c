// Salary Management System

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float totalSalary;
};

int main()
{
    struct Employee emp;
    float hraPercent = 20;
    float daPercent = 10;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basicSalary);

    emp.hra = (emp.basicSalary * hraPercent) / 100;
    emp.da = (emp.basicSalary * daPercent) / 100;

    emp.totalSalary = emp.basicSalary + emp.hra + emp.da;

    printf("\n------ Salary Slip ------\n");

    printf("Employee ID   : %d\n", emp.id);
    printf("Employee Name : %s\n", emp.name);
    printf("Basic Salary  : %.2f\n", emp.basicSalary);
    printf("HRA           : %.2f\n", emp.hra);
    printf("DA            : %.2f\n", emp.da);
    printf("Total Salary  : %.2f\n", emp.totalSalary);

    return 0;
}