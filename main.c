/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main (void)
{
int numReviews[11],review,i;

for (i=1;i<=10;++i)
numReviews[i]=0;
printf("Enter your reviews \n");
for (i=1;i<=10;++i){
    scanf("%i",&review);
    if(review<0||review>10)
    printf("Incorrect review \n");
    else
    ++numReviews[review];
    
}
printf("review      Num of reviews \n");
printf("______      ________________\n");
for (i=1;i<=10;++i)
printf("%4i                %4i          \n",i,numReviews[i]);

 return 0;   
}
