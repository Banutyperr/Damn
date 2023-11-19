#include <stdio.h>
#include <stdbool.h>

bool alphabetic ( const char c){
    if (( c >='a' && c<= 'z')||( c >= 'A' && c <= 'Z'))
        return true;
    else
        return false;
}


int  WordCount(const char string[]){
    int wordcount = 0 ;
    bool wordyes = true , alphabetic (const char c );
    for ( int i = 0 ; string [i] != '\0'; ++i ){
        if ( alphabetic (string[i])){//the beginning of the new word then it closes itself untill the nonword element then after it , it gives the key , and then after the starting of the other word it opens increments count and then closes itself again.
            if ( wordyes ){
                ++wordcount;
                wordyes = false;
            }
        }
        else
            wordyes = true;

    }
    return wordcount;
}

int main() {
    const char text1[]= "heyyyy ,wussup!";
    int CountWords (const char string []);
    printf ("%s - woeds = %i \n",text1,CountWords (text1));


    return 0;
}
