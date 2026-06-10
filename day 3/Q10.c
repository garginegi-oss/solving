#include<stdio.h>
int main()
{
    int num1, num2, i, j;
    printf ("enter range :");
    scanf ("%d %d" , &num1, &num2);
    for(i=num1; i<=num2; i++)
    {
        if(i < 2)
            continue;

        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
                break;
        }

        if(j > i/2)
            printf("%d ", i);
    }

    return 0;
}