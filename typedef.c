#include <stdio.h>
#include <math.h>








int main() {
    typedef int Counter ; // #define Counter int
    Counter i,j; //i and j are of type Counter ,which is in it's own turn is equivalent to the type int

    //typedef is handled by the C compiler proper, and not by the preprocessor like the #define does



    typedef char Linebuf[81];  //right comes ,then left
    Linebuf  text , inputLine ; //has the effect of defining the variables text and inputLine to be arrays containing 81 characters
 // char text[81] ,inputLine[81];








     typedef char * StringPtr;
     StringPtr  buffer;
   // char * buffer








   typedef struct {
       int month ;
       int day;
       int year;
   } Datestruct ;
   Datestruct birthdays[100];
 // birthdays to be an array containing 100 Date structures.





  typedef struct {
      float x;
      float y;
  } Pointstruct;
  const Pointstruct origin = {0.0 , 0.0};
  Pointstruct currentPoint;








  double distance (Pointstruct p1 , Pointstruct p2 ){

      double diffx,diffy;

      diffx =  p1.x - p2.x;
      diffy =  p1.y - p2.y;


      return sqrt (diffx * diffx + diffy * diffy );
  }






//Remember, the typedef statement does not actually define a new type—only a new type name.



























    return 0;
}
