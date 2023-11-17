#include <stdio.h>

int main() {
    int P[150];
    int i = 2 ;
    for(int n = 0 ; n<150 ; ++n)
        P[n]=0;
    while (i<=150){
        if (P[i]==0)
            printf("%i is prime \n",i);
        for (int j = 1 ; i*j<=150;++j)
            P[i*j]=1;
        ++i;
    }

}
