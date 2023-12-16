#include <stdio.h>

float absoluteValue (float x)
{
    if ( x < 0 )
        x = -x;
    return (x);
}
float squareRoot (float x)
{
    const float epsilon = .0000000001;
    float guess = 1.0;
    while ( absoluteValue (guess * guess - x) >= epsilon )
        guess = ( x / guess + guess ) / 2.0;
    return guess;
}

int main() {
    double a , b, c ;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    double x1,x2;




   double discriminant = (b * b) - (4 * a * c) ;
   if (discriminant < 0 ){
       printf("No real roots\n");
   }
   else {
       b = -b ;
       x1 = ( b  + squareRoot(discriminant) ) / (2 * a );
       x2 = ( b - squareRoot(discriminant)) / (2 * a );
       printf("%lf \n, %lf \n",x1, x2);
       printf("2 roots\n");
   }
}



