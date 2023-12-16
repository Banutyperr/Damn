#include <stdio.h>
#include <string.h>
int main(void)
{
   int num;
   scanf("%i",&num);
   

   int integer[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
   char* rome[14]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
   
   
   for (int i = 0; i<13;++i){
   while(num>=integer[i]){
   num-=integer[i];
   printf("%s",rome[i]);//her defe icindeki rome reqemin cixardir boyuden kiciye
   }}
   
    return 0;
    
}
