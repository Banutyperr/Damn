#include <stdio.h>

int sum (int a , int b ){
       return a + b ;

}

int main(void) {
    int sum (int a , int b );
    int (*sumPtr) (int , int );
    sumPtr = sum;
    int case1 = sumPtr(6,9);

    printf ("%i", case1);
    return 0;
}
