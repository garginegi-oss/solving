// Mini Library System

#include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int issued;
};

int main()
{
    struct Book b[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Title: ");
        scanf("%s", b[i].title);

        printf("Author: ");
        scanf("%s", b[i].author);

        printf("Issued (1 = Yes, 0 = No): ");
        scanf("%d", &b[i].issued);
    }

    printf("\n========== LIBRARY ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook ID : %d\n", b[i].id);
        printf("Title   : %s\n", b[i].title);
        printf("Author  : %s\n", b[i].author);

        if(b[i].issued == 1)
            printf("Status  : Issued\n");
        else
            printf("Status  : Available\n");
    }

    return 0;
}