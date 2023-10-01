#include <stdio.h>
int factorial(int a){
    if(a==0)
    return 1;
    else
    return a*factorial(a-1);
}

int main(void)
{
   int factorial(int a);
   int raw,n,i,l;
   scanf("%i",&raw);
   for (n=0;n<raw;++n){
   for (i=0;i<=n;++i){
   l=n-i;
   printf("%i ",factorial(n)/(factorial(i)*factorial(l)));
       
   }}
   
   
   
}
