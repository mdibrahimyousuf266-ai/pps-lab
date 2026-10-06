#include<stdio.h>
int main ()
{
    int n,i,j,count;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("prime number between 1 and % are:\n",n);
    for (i=2;i<=n;j++)
    {
        count=0;
    for (i=1;j<=1;j++)
    {
        if(i%j==0)
        {
            count++;
        }
    }
    if (count==2)
    {
        printf("%d",i);
    }
}
return 0;
}
