#include <stdio.h>


void copyString( char *to , char *from){
    while(*from)//unless from do not reach the null character
        *to++ = *from++;//first make them equal then increment 


    *to = '\0';
}

int main() {

    void copyString( char *to , char *from);

    char hey[] = "hello bitch";
    char bye[] ="good bye ";
   copyString( hey , bye);//pointers to the first elements of an array



    printf("%s",hey);

    return 0;
}
