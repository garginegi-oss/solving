#include<stdio.h>
int main()
{
    int r,n,num,sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    n = num;
    while(n>0)
{
    r = n% 10;
    sum = (sum*10) + r;
    n = n/10;

}
 if (sum==num)
 {
    printf("%d is a palindrome number",num);
 }
 else 
 {

    printf("%d is not a palindrome number", num);
 }
        
return 0;
}


