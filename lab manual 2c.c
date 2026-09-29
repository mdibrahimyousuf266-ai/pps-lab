#include<stdio.h>
int main()
{
    int choice, units;
    float bill;
    printf("electricity bill calculator\n");
    printf("1.domestic\n");
    printf("2.commercial\n");
    printf("3.industrial\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    printf("enter units consumed:");
    scanf("%d",&units);
    if (units<0)
    {
        printf("industrial units");
        return 0;
    }
    switch (choice)
    {
    case 1:
        bill = units*2;
        printf("domestic bill =rs.%.2f",bill);
        break;
    case 2:
        bill=units*5;
        printf("commercial bill =rs.%.2f",bill);
        break;
    case 3:
        bill=units*7;
        printf("industrial bill=rs.%.2f",bill);
        break;
    default:
        printf("industrial choice");
    }
    return 0;
}
