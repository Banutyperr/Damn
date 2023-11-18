#include <stdio.h>
int stringlength(const char strring[]){
    int count = 0 ;
    while(strring[count]!='\0'){
        ++count;
    }
    return count;
}

int main() {
    int stringlength(const char strring[]);
    const char l1[]={'b','i','t','c','h','\0'};
    printf ("%i",stringlength(l1)) ;
    return 0;
}
