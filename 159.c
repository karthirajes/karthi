#include <stdio.h>
void main() 
{
int a=5,n,m,c;
printf("\n enter the number");
scanf("%d",&a);
while(a!=0)
{
n=a%10;
m=(m*10)+n;
a=a/10;
}
while(m!=0)
{
c=m%10;
printf("%d ",c);
m=m/10;
}
}
