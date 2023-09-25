#include <stdio.h>
int main(void){
    int k;
    scanf ("%i",&k);
    int fibonacci[k],i;
    fibonacci[0]=0;
    fibonacci[1]=1;
    for (i=2;i<k;++i)
        fibonacci[i]= fibonacci[i-1]+ fibonacci[i-2];
    printf("The list of all Fibonacci %i numbers.\n",k);
    for (i=0;i<k;++i)
    printf("%2i \n",fibonacci[i]);
    return 0;
    }
//version 2
#include <stdio.h>
#include <stdbool.h>
int main(void){
int  FibF, k , FibS , FibC ;
scanf( "%i", & k ) ;

FibF =1;
FibS =1;

for (int i=0 ;i<k;++i)
{
    FibC=FibF+FibS;
    FibF=FibS;
    FibS=FibC;
    printf("%i \n",FibC);
}}
