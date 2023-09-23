/******************************************************************************

      A little program that counts the reviews about a book in scope of 10.

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
