#include <stdio.h>
int main(void){
    int a=7;
    int b=6;
    int s;
    do {
        s=a+b;
        ++a;
        ++b;
        printf("%i\n",s);
     
    }while (s<20);
    a=7;
    b=6;
    s=0;
    
    printf("---------------------------------------\n");
    
    while(s<20 && (s=a+b) && printf("%i\n",s)){
        
        ++a;
        ++b;
       
    }
}
