#include<stdio.h>
int main()
{
int n=5,a[10],i,low,great;
scanf("%d",&n);
for(i=0;i<5;i++)
scanf("%d",&a[i]);
low =a[0];
for(i=1;i<5;i++)
{
    if(a[i]<low)
    {
        low=a[i];
    }
}
printf("%d\t",low);
  great = a[0];
  
    for (i = 1; i < 5; i++) 
    {
if(a[i] > great)
{
great= a[i];
}
    }
    printf("%d", great);
   
}
