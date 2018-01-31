#include <stdio.h>
int main() 
{
	int d,e,f;
	printf("enter the time");
	scanf("%d",&f);
	d=f/60;
	e=f%60;
	printf("%dhours %dmin",d,e);
	return 0;
}
