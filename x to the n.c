#include <stdio.h>
long int  x_to_the_n(int  x,int n){
    int k=0;
    int ans=1;
    for (k;k<n;++k)
    ans*=x;
    
    return ans;
    
}
int main(void){
    long int  x_to_the_n(int  x,int n);
    printf("%li", x_to_the_n(16,3));
    return 0;
}