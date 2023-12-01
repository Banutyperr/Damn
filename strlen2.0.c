#include <stdio.h>


int stringLength (const char *string){


    const char *cptr = string ; //first starts at the 0 th element of the string

    while (*cptr)
        ++cptr;// loops through the elements of the list until  it reaches the null

    return cptr - string;// subtracts the 0 th index from the last

}

int main() {
    int stringLength (const char *string);
    printf ("%i ", stringLength ("stringLength test"));

    return 0;
}
