#include<stdio.h>
int main(){
int ip,op=0;
printf("Enter number:");
scanf("%d",&ip);
while(ip!=0){
op=op*10+ip%10;
ip/=10;}
printf("reverse:%d\n",op);
return 0;}
