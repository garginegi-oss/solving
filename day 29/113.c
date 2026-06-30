// Contact Management System

#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[20];
};

int main()
{
    struct Contact contacts[100];
    int n, i;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Contact %d Details\n", i + 1);

        printf("Name : ");
        scanf("%s", contacts[i].name);

        printf("Phone Number : ");
        scanf("%s", contacts[i].phone);
    }

    printf("\n====== Contact List ======\n");

    for(i = 0; i < n; i++)
    {
        printf("\nContact %d\n", i + 1);
        printf("Name  : %s\n", contacts[i].name);
        printf("Phone : %s\n", contacts[i].phone);
    }

    return 0;
}