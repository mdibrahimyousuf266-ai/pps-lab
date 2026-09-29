#include<stdio.h>
int main()
{
    int a,b,result;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    result=~a;
    printf("not result=%d",result);
    return 0;
}
