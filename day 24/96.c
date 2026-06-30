// Program to remove duplicate characters from a string

#include <stdio.h>

int main()
{
    char str[100];
    int i, j;
    int visited[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("String after removing duplicates:\n");

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if(visited[(int)str[i]] == 0)
        {
            printf("%c", str[i]);
            visited[(int)str[i]] = 1;
        }
    }

    return 0;
}