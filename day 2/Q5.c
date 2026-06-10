#include<stdio.h>
int main()
{
    int n, s = 0 ;
    printf("enter any number:");
    scanf("%d", &n);
    
while (n != 0)
{

   s = s + n%10; 
    n = n/10;
}
printf("sum of digits is %d", s);

return 0;

}