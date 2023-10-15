#include <stdio.h>
int main(void){
    int k;
    scanf ("%i",&k);
    int fibonacci[k];
    fibonacci[0]=0;
    fibonacci[1]=1;
    for (int i=2;i<k;++i)
        fibonacci[i]= fibonacci[i-1]+ fibonacci[i-2];
    printf("The list of all Fibonacci %i numbers.\n",k);
    for (int i=0;i<k;++i)
    printf("%2i \n",fibonacci[i]);
    return 0;
    }
