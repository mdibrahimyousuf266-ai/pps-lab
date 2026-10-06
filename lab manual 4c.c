#include <stdio.h>
int main()
{
    int a,b;
    char choice ;
    printf ("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("\n enter an operator(+,-,*,/,%%):");
    scanf("%c",&choice);
    switch(choice)
    {
case'+':
printf("addtion=%d\n",a+b);
break;
    case '-':
    printf("subtraction=%d\n",a-b);
    break ;
    case'*':
    printf("multiplication=d\n",a*b);
    break;
    case'/':
    if(b!=0)
        printf("division =%d\n",a/b);
    else
        printf("division of zero is not possible.\n");
    break;
    case'%':
    if(b!=0)
        printf("modules=%d\n",a%b);
    else
        printf("modules by zero is not possible.\n");
    break;
    default:
    printf("invalid operator .\n");
    }
    return 0;
}

