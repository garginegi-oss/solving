#include<stdio.h>
int main()
{
    int n, rem , p=1;
    printf("enter a number:");
    scanf("%d" , &n);
    while(n>0)
{
    rem = n%10;
    p = p*rem;
    n = n/10;

}
printf("product of digits is %d", p);
return 0 ;
}