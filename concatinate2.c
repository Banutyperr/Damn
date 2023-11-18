#include <stdio.h>
int lenchar(const char d[]){
    int count=0;
    while(d[count]!='\0')
        ++count;
    return count;
}

int main(void) {
    //{"hello"}={'h','e','l','l','o','\0'}="hello"
    //printf("%s",smth)only if smth has \0 at the end
    int lenchar(const char d[]);
    void concat (char result[],const char str1[],const char str2[]);
    const char s1[]="i am ";
    const char s2[] = "baaaack bitches !";
    int n = lenchar(s1)+lenchar(s2);
    char s3[n];
    concat(s3,s1,s2);
    printf("%s",s3);

    return 0;
}
void concat (char result[],const char str1[],const char str2[]){
    int i = 0 , j = 0 ;
    for (; str1[i] != '\0' ; ++i)
        result[i]=str1[i];
    for (; str2[j] != '\0'; ++j)
        result[i+j]=str2[j];

    result[i + j]='\0';
}
