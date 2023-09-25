#include <stdio.h>
void gcd(int a,int b){
    int temp;
    while(b!=0){
    temp=a%b;
    a=b;
    b=temp;}
    
    printf("%i \n",a);}
    
int main(void){
    int a,b;
    scanf("%i \n  %i",&a,&b);
    gcd(a,b);
    
    return 0 ;
    
}
    