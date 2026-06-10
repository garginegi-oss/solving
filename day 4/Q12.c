#include<stdio.h>
int main()
{
    int a,b,lcm;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);
    lcm = (a > b) ? a : b;
    for (lcm=1; lcm<a*b; lcm++)
    if(lcm%a==0 && lcm %b==0)
    printf("LCM of %d and %d is %d", a, b, lcm);
    return 0;
}