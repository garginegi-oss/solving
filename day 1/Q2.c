#include<stdio.h>
int main()
{
    int i,n,m;
    printf("enter the value of n");
    scanf("%d" , &n);
    printf("enter the value of m");
    scanf("%d" , &m);
    for (i=1;i<=m;i++)
    {
        printf("%d\t" , i*n);
        printf("\n");


}
return 0 ;
}