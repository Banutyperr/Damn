#include <stdio.h>
int strtoint (const char string[]){
    int i = 0 , intValue , result = 0 , sign = 1;

    if (string[0]=='-') {
        sign = -1;
        i=1;
    }
    while (string[i]>='0' && string[i]<='9'){
        intValue = string[i] - '0';
        result = result * 10 + intValue;
        ++i;
    }
    return sign * result;




}

int main() {
    int strtoint (const char string[]);
    printf ("%i",strtoint("kj"));
    return 0;
}
