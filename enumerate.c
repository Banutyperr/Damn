#include <stdio.h>
//variable struct deyerdim buna men




int main() {
   enum primaryColor { red , yellow, blue };
   enum primaryColor myColor , gregsColor ;
   myColor = red ;
   gregsColor= yellow;
   if( gregsColor == yellow){
       printf("fuck offff everybody\n");
   }









   enum month { january, february, march, april, may, june,july, august, september, october, november, december };
   // the compiler assigns sequential integer values to the enumeration identifiers , starting from 0
   enum month thisMonth;
   thisMonth = august ;
   int monthValue = 8 ;//Explicitly assigning an integer value to an enumerated data type variable can be done with the type cast operator.
            thisMonth = (enum month) (monthValue - 1);
   printf("august is %ith month\n",thisMonth+1);










   enum direction { up ,down,left =10 ,right };
//                   0    1     10        11
   enum direction dir_3 ;
   dir_3 = up; //dir_3 == 0
   printf("dir_3 == %i\n",dir_3);











   enum {east , west ,south , north} direction ;//: Defining an enumerated data type within a block limits the scope of that definition to the block
   direction = east;
   //The name of the data type can be omitted, and variables can be declared to be of the particular enumerated data type when the type is defined
   printf("%i\n",direction);







   enum switch1 { no = 0 , off = 0 , yes = 1 , on = 1 };
   enum switch1 dumb;
   dumb = no ;
   printf("dumb is no == %i\n",dumb);













   return 0;
}
