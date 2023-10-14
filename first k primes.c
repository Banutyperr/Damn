
#include <stdio.h>
#include <stdbool.h>
int main(void){
    int k;
    scanf("%i",&k);
    int Prime[k],i,p,index=2;
    bool IsPrime;
    Prime[0]=2;
    Prime[1]=3;
    
    for (p = 5; p < k; p = p + 2 ){
    IsPrime=true;
    for (i=1;IsPrime && p / Prime[i] >= Prime[i] ;++i)
    if (p % Prime[i] == 0)
    IsPrime=false;
    
    if (IsPrime){
    Prime[index]=p;
    ++index;}}
        
    
    for (i=0 ; i < index ;++i)
    printf("%3i \n",Prime[i]);
    
    return 0;
    
    
    
    
    
    
    }   

  
