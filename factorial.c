#include <stdio.h>

int main()
{
    unsigned int j;
    int k;
    scanf("%i",&k);
    unsigned long int  factorial(unsigned int n);
    for(j=0;j<k;++j)
    printf ("%2u! = %lu \n", j, factorial (j));
    
    return 0;
    
}



unsigned long int  factorial(unsigned int n){
    unsigned long int result;
    
    if (n==0)
    result= 1;
    else
    result = n * factorial(n-1);
    
    return result;
    
}



//2nd approach (i like it more( and not because of simplicity))


#include <stdio.h>

int main()
{
    unsigned int j;
    int k;
    scanf("%i",&k);
    unsigned long int  factorial(unsigned int n);
    for(j=0;j<k;++j)
    printf ("%2u! = %lu \n", j, factorial (j));
    
    return 0;
    
}



unsigned long int  factorial(unsigned int n){
    unsigned long int result;
    result=1;
    int b;
    
    
   for (b=1;b<=n;++b)
   result*=b;
    
    return result;
}


//btw it breaks at k>65


