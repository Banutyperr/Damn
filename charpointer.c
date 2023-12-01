
#include <stdio.h>
#include "charpointer.h"



int main() {
        char* days[] ={ "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday","Saturday" };


        for (int i = 0 ; i < 6 ; ++i)
        printf ("%c", *(days[0]+i));




        printf("\n");


        // days[0] = "sunday"
        printf("%s", days[0]);



        return 0;
    }