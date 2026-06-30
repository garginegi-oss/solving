// Program to find the maximum occurring character

#include <stdio.h>

int main()
{
    char str[100];
    int freq[256] = {0};
    int i;
    char maxChar;
    int max = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != '\n')
        {
            freq[(int)str[i]]++;
        }
    }

    for(i = 0; i < 256; i++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
            maxChar = i;
        }
    }

    printf("Maximum occurring character = %c", maxChar);
    printf("\nFrequency = %d", max);

    return 0;
}