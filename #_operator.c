#include <stdio.h>



#define  str(x)   #x    //# creates a constant string out of the argument
#define  printint(var)    printf(#var " = %i \n" , var )
int main() {
    printf(str(Hello World\n));//printf("Hello World\n");
    int count = 100 ;
    printint (count); // printf ( " count" " = %i \n" , count);  printf("count = %i \n " , count)

    return 0;
}
