#include <stdio.h>
//Your function takes two arguments: the first, the value to be rotated, and the second,
//the number of bits by which the object is to be rotated. If this second argument is positive, you rotate the value to the left; otherwise, you rotate the value to the right
unsigned int rotate (unsigned int value , int n ){
    unsigned int result , bits ;

    if (n>0)
        n = n % 32;//This places the shift count in the range of 0 through 31.
    else
        n = -(-n % 32);// -31 0

    if (n == 0)//If the adjusted shift count is 0, the function simply assigns value to result.
        result = value ;

    else if ( n > 0 ){//left
        bits = value >> ( 32 - n ) ;
        result = value << n | bits ;//just because it adds 0s to the right
        
    }
    else {
        n = - n ;
        bits = value << (32 - n);
        result = value >> n | bits ;
    }


    return result;

}



int main() {
    unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;// a,b,c,d,e,f,0 = 4 bits
    unsigned int rotate (unsigned int value, int n);


    printf ("%x\n", rotate (w1, 8));
    printf ("%x\n", rotate (w1, -16));
    printf ("%x\n", rotate (w2, 4));
    printf ("%x\n", rotate (w2, -2));
    printf ("%x\n", rotate (w1, 0));
    printf ("%x\n", rotate (w1, 44));



    return 0;
}