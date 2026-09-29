#include <stdio.h>
int main()
{
    int choice;
    int a=10,b=5;
    printf("1.addition\n");
    printf("2.substraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("enter your choice:");
    scanf("%a",&choice);
    switch (choice)
    {
    case 1:
        printf("sum =%d",a+b);
        break;
    case 2:
        printf("diff=%d",a-b);
        break;
    case 3:
        printf("product=%d",a*b);
        break;
    case 4:
        printf("division=%d",a/b);
        break;
    default :
        printf("invalid choice");
    }
    return 0;
}
