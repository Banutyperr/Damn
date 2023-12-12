#include <stdio.h>

int main() {
    float f = 5.6 ;
    int i = 8 ;
    long int l = 89 ;
    short int s = 34 ;




    float result = f * i + l / s ;
    float resultfinito= f * (float) i + (float)( l / (long int )(int)s /*long  int*/ ) ;



    printf ("%f\n%f\n",result , resultfinito);

    printf ("%i",result==resultfinito);
    return 0;
}
//1) if (type1 == long double){type2= long double};result == long double
//2) elif (type1 ==  double){type2= double};result == double
//3) elif (type1 == float){type2= float};result == float
//4*) elif (type1 == _Bool or char or short int or bit field){type1= int};
//5) elif (type1 == long long int ){type2= long long int }; result == long long int
//6) elif (type1 == long int){type2= long int };result == long  int
//7) elif (type1 == int ){type2= int};result == int




// long double , double , float , _bool or char or short int or bit field , long long int , long int , int
