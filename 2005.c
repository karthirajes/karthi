
#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
while(n!=1)
{
if(n%10==0)
{
printf("%d",n);
break;
}
n--;
}
}
