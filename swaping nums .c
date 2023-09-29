#include <stdio.h>

int main(void )
{
   int a,b;
   printf("enter the numbers you wanna swap:\n");
   scanf("%i%i",&a,&b);
   
   a=a+b;
   b=a-b;
   a=a-b;
   printf("a=%i b=%i",a,b);
   
   
   
   
   return 0;

}