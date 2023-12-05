#include <stdio.h>

int main() {
    unsigned int a = 03u ;//3 which is 11
    unsigned int b =05u;//5 which is 101
    unsigned int c = 04u;//4 which is 100
    unsigned int j = 066u ;//110110
    unsigned int k = 075u;//111101
  




    /* AND */


    printf("%o\n",a & b);


    printf("%o\n",j & 1);//odd even checker if 0 even else odd
    printf("%o\n", j & 7);//preserves  log(7+1) rightmost bits

    printf("%o\n", b & b);// returns the number itself


    /* OR */

    printf("%o\n", a | b);
    printf("%o\n", c | 7);//sets the log(7+1) bits to 1


    /*  XOR */
    printf("%o\n", k ^ k );//returns 0

    if (!(k ^ k)){
        printf ("equal \n");  //used for checkin if two nums are equal or not
    }



    /*ones complement */


    printf("%o\n",~j );




    /* book examples */
    printf ("book examples \n");
    printf ("\n");

    //             101010101    111000111    1010010
    unsigned int w1 = 0525u, w2 = 0707u, w3 = 0122u;
    printf ("%o %o %o\n", w1 & w2, w1 | w2, w1 ^ w2);
    printf ("%o %o %o\n", ~w1, ~w2, ~w3);
    printf ("%o %o %o\n", w1 ^ w1, w1 & ~w2, w1 | w2 | w3);
    printf ("%o %o\n", w1 | w2 & w3, w1 | w2 & ~w3);
    printf ("%o %o\n", ~(~w1 & ~w2), ~(~w1 | ~w2));



    w1 ^= w2;/* following three are for swapping numbersJ*/
    w2 ^= w1;
    w1 ^= w2;
    printf ("w1 = %o, w2 = %o\n", w1, w2);
    return 0;





    return 0;
}
