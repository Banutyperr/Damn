#include <stdio.h>
//just fucking include the prototype
int main() {
    float x ;


    int /*cuz it automatically assumes the function will return int*/ y = absoluteValue(x);//x is double here cuz it is automatically converted

    return 0;
}
//if the compiler sees neither the function definition nor a prototype declaration before it encounters a call to a function, it assumes the function returns an int

// In the absence of information about the argument types to a function, the compiler automatically converts
//_Bool, char, or short arguments to ints and converts float arguments to double.