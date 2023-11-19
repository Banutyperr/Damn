#include <stdio.h>


int main(void) {
    char line[81];
    printf ("Enter the number of rows in the text: ");
    int k ;
    scanf ("%i", &k );
    void readLine (char buffer []);

    for (int i = 0 ; i <= k ;++i){
        readLine(line);
        printf ("%s \n\n",line );
    }


    return 0;
}
void readLine (char buffer []) {
    char character;
    int i = 0;
    do {
        character = getchar();
        buffer[i] = character;
        ++i;
    } while (character != '\n');
    buffer[i - 1] = '\0';
}

