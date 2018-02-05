#include <stdio.h>
#include <string.h>
 void main()
{
   char a[10], b[10];
    printf("Enter a string\n");
   gets(a);
    printf("Enter a string\n");
   gets(b);
   if (strcmp(a,b) == 0)
      printf("Entered strings are equal.\n");
   else
      printf("Entered strings are not equal.\n");
 }
