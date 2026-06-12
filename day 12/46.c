#include <stdio.h>

int isArmstrong(int n)
{
    int sum = 0, temp = n, digit;

    while(temp > 0)
    {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    return sum == n;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isArmstrong(num))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}