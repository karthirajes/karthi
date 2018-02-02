#include<stdio.h>
void main()
{
int a,i;
printf("enter a number");
scanf("%d",&a);
for(i=1;i<=100;i++)
{
if(a%i==0)
{
printf("The Factors are %d\n",i);
}
}
}
