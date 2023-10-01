#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%i",&a);
    int  numdig;
    numdig= a==0 ? 1:log10((double)a)+1;
    printf ("%i",numdig);
    return 0;
}
