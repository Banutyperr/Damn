#include <stdio.h>
void concat (char result[] ,const char  str1[] , int n1 , const char str2[] , int n2  )
{
    for (int i = 0 ; i < n1 ; ++i) 
        result[i]=str1[i];
    for (int j = 0 ; j < n2 ; ++j)
        result[n1+j]= str2[j];

}

int main ( void ){
    void concat (char result[] ,const char  str1[] , int n1 , const char str2[] , int n2  );
    const char s1[3]={'h','i'};
    const char s2[7] = {'b','i','t','c','h',':',')'};
    char s3[10];
    concat (s3 , s1 , 3, s2 , 7);
    for ( int i = 0 ; i < 10 ; ++i){
        printf("%c",s3[i]);
    }
    printf("\n");
    return 0 ; }


