#include <stdio.h>

#define YES  1
#define NO  0
#define  LEFT_SHIFT_8   <<8
#define  AND       &&
#define  OR       ||
#define BIT_AND    &
#define BIT_OR     |
#define  EQUALS_TO   ==
#define MOD  %
#define IS_NOT_EQUAL !=
#define  TWO_PI   2.0 * PI //reference to another define and it is ok before it
#define  PI     3.141592654
//The rule is that you can reference other defined values in your definitions provided everything is defined at the time the defined name is used in the program
int year  =  64;
#define BOL_4   year / 4
#define IS_LEAP_YEAR(y)  y MOD 4 EQUALS_TO  0 AND y MOD 100 IS_NOT_EQUAL  0  OR  y MOD 400 EQUALS_TO 0
#define FAKE_SQUARE(x)  x * x
//The point to be made here is that v can be of type int, or of type long, or of type float, for example, and the same macro can be used.
//macros take more space than a regular function ,but it takes less time to implement
#define REAL_SQUARE(y)  ((y)*(y))   // in this case the entire expression as given to the SQUARE macro that is literally substituted wherever x appears in the definition
#define MAX(a,b)  ( ( ( a) > (b) ) ? (a) : (b) )//to make sure it is gonna work even if the a and b are expressions
#define IS_LOWER_CASE(x)    ( ( (x) >= 'a' ) AND ( (x) <= 'z') )
#define TO_UPPER(X)   ( IS_LOWER_CASE(X) ? (X) - 'a' + 'A' : (X))// it did not work when I wrote TO_UPPER (X)
#define  debugPrintf(...)    printf ("Debug : " __VA_ARGS__);





int isEven (int num ){
    int ans;

    if( num % 2 == 0 )
        ans = YES;
    else
        ans = NO;


    return ans;
}


int main() {
    int leap_year =  1989;

    int shifted = 2006;

    printf("%d\n",BOL_4);

    if (IS_LEAP_YEAR(leap_year)){
        printf("1989 was a leap year\n");
    }
    else{
        printf("1989 was not a leap year\n");
    }



    shifted = shifted LEFT_SHIFT_8 ;


    printf("%i \n",shifted);
    int a = 5;
    long int b = 600000000;
    double c = 6.6;
    int x1;
    int x2;
    int x3;
    int x4;
    int x5;
    char is_lower = 'f';
    if(IS_LOWER_CASE(is_lower)){
        printf("%c is in lower case\n", is_lower);
    }
    printf("%c\n",TO_UPPER(is_lower));




    int x = 2;

    a = FAKE_SQUARE(a);
    b = FAKE_SQUARE(b);
    c = FAKE_SQUARE(c);




    debugPrintf("a = %i\n",a);
    debugPrintf("b = %li\n",b);
    debugPrintf("c = %f\n",c);






    x1 = FAKE_SQUARE(x+1); // x + 1 * x + 1  == 2 + 1 * 2 + 1 == 2 + 2 + 1 = 5
    x2 = REAL_SQUARE(x+1);// (( x + 1 ) * ( x + 1 )) == ( ( 2 + 1 ) * ( 2 + 1 ) ) == ( 3 *  3) == 9
    x3 = MAX(x1,x2);
    x4 = MAX(x1 + x2 , x3);
    x5 = MAX(x1 BIT_AND x2 , x3 );





    printf("%i\n%li\n%f\n",a,b,c);




    printf("%i\n%i\n",x1,x2);
    printf("MAX :\n");


    printf("%i\n",x3);

    printf("%i\n%i\n",x4,x5);



    return 0;
}
