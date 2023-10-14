
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
