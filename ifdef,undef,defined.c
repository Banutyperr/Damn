#include <stdio.h>

#ifndef hello
#define hello



//everything here will be included if hello was not defined

#endif
#define OS 1

#if OS == 1
#define k 6
#elif OS==2
#define k 7
#elif  OS == 3
#define k 8
#endif

#define name  7

#if defined (name) // === ifdef name
#define noname -name
#endif


#undef name




int main(void) {
    printf ("%i\n",k);
    printf("%i\n",noname);
    return 0;
}



//if nen bawlayan her weyin axrina endif goymag lazim
//undef undefines a defined value and it turnes out even if the defined value is before it
// if defined(nese) === ifdef nese
//ifndef  === !ifdef
