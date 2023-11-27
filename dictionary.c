#include <stdio.h>
#include <stdbool.h>


struct entry {
    char word[15]; 
    char definition[50];
};


bool equalStrings(const char s1[], const char s2[]) {
    int i = 0;
    bool areEqual;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] !='\0')// it compares every literal of the string ,it never compares the null cuz all it is for is to emphasize the end of the string if we take it into acc then we'll never know that string is over !
        ++i;
    if (s1[i] == '\0' && s2[i] == '\0')//here it compares if the literals didnt match or it just reached the end of both strings
        areEqual = true;
    else
        areEqual = false;
    return areEqual;
}

int lookup(const struct entry dictionary1[], const char search[], const char entries1) {//niye bele olduki ,like i have named global and local var the same way


    for (int i = 0; i < entries1; ++i){
        if (equalStrings(dictionary1[i].word, search)){
            return i;
        }}


    return -1;
}

int main() {
    const struct entry dictionary[100] =
            {{"aardvark", "a burrowing African mammal"},
             {"abyss",    "a bottomless pit"},
             {"acumen",   "mentally sharp; keen"},
             {"addle",    "to become confused"},
             {"aerie",    "a high nest"},
             {"affix",    "to append; attach"},
             {"agar",     "a jelly made from seaweed"},
             {"ahoy",     "a nautical call of greeting"},
             {"aigrette", "an ornamental cluster of feathers"},
             {"ajar",     "partially opened"}};


    char word[14];
    int entries = 10;
    int entry;

    printf("Enter the word : ");
    scanf("%14s", word);

    entry = lookup(dictionary, word, entries);



    if ( entry != -1 )
        printf("%s\n", dictionary[entry].definition);

    else
        printf("Sorry , the word %s is not in this dictionary .\n", word);

    return 0;
}
