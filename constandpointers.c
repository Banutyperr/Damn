#include <stdio.h>

int main() {
    char c = 'X';
    char * charPtr = &c; //just a pointer
    char k ;
    char * const chPtr = &k; // a CONSTANT pointer
    char t ;
    const char * cPtr = &t; //a pointer to the CONSTANT value
    char p ;
    const char * const * CHPtr = &p; // a pointer to the CONSTANT pointer , which is a pointer to the CONSTANT value
    
    return 0;
}
