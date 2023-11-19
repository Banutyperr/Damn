#include <stdio.h>
#include <stdbool.h>

bool equalStrings ( const char s1[],const char s2[]) {
    int i = 0;
    bool areEqual;
    while (s1[i] != s2[i] && s1[i] != '\0' && s2[i] != '\0')// it compares every literal of the string ,it never compares the null cuz all it is for is to emphasize the end of the string if we take it into acc then we'll never know that string is over !
        ++i;
    if (s1[i] == '\0' && s2[i] == '\0')//here it compares if the literals didnt match or it just reached the end of both strings
        areEqual = true;
    else
        areEqual = false;
    return areEqual;
}



int main() {
    bool equalStrings ( const char s1[],const char s2[]);
    const char stra [] = "some iphone problems";
    const char strb [] = "some samsung problems";

    printf ("%i \n",equalStrings (stra , strb));

    return 0;
}
