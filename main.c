#include <stdio.h>

int main() {
    int n ;
    scanf("%i",&n);
    int P[n];
    int i = 2 ;
    for(int m = 0 ; m < n  ; ++n)
        P[m]=0;
    while (i<=150){
        if (P[i]==0)
            printf("%i is prime \n",i);
        for (int j = 1 ; i*j<=150;++j)
            P[i*j]=1;
        ++i;
    }

}
