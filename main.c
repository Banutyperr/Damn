/******************************************************************************

      A little program that counts the reviews about a book in scope of 10.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>
int main (void)
{
int numReviews[11],review,i;

for (i=1;i<=10;++i)
numReviews[i]=0;
printf("Enter your reviews \n");
printf("type in 999 to the console to finish entering the responses");
while(true){
    scanf("%i",&review);
      if (review==999)
            break;
      else{
    if(review<0||review>10)
    printf("Incorrect review \n");
    else
    ++numReviews[review];}
    
}
printf("review      Num of reviews \n");
printf("______      ________________\n");
for (i=1;i<=10;++i)
printf("%4i                %4i          \n",i,numReviews[i]);

 return 0;   
}
