#include <stdio.h>
#include <stdbool.h>
void readLine (char buffer []);
bool alphabetic ( const char c);
int  WordCount(const char string[]);

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


int main (void)
{
    char text[81];
    int totalWords = 0;
    bool endOfText = false;
    printf("Type in your text.\n");
    printf("When you are done, press 'RETURN*.\n\n");
    while (!endOfText) {
        readLine(text);
        if (text[0] == '\0')
            endOfText = true;
        else
            totalWords += WordCount(text);
    }
    printf("\nThere are %i words in the above text.\n", totalWords);
    return 0;
}