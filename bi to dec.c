#include<stdio.h>
int main(){
int bi,dec,i;
for(;;){
dec=0,i=1;
printf("Enter binary:");
scanf("%d",&bi);
while(bi!=0){
dec+=i*(bi%10);
bi/=10;
i*=2;}
printf("Decimal:%d\n",dec);}
return 0;}
