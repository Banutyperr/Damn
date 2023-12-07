#include <stdio.h>


struct packet_struct
{
    unsigned int :3;// specifies 3 unnamed bits
    unsigned int f1:1;//specifies 1 bit to f1
    //The flags f2 and f3 are similarly defined as being a single bit in length.
    unsigned int f2:1;
    unsigned int f3:1;
    unsigned int type:8;//The member type is defined to occupy eight bits cuz type is between 0 and 255
    unsigned int index:18;//The member index is defined as being 18 bits long ,cuz index is between 0 and 100.000

};
//The C compiler automatically packs the preceding bit field definitions together.


int main() {
    //only the low-order eight bits of n will be assigned to packed_data.type.
    //bele cixir soldan saga doldururuq
    struct packet_struct packet_data;
    unsigned int n , v , k ;
    scanf("%u", &n);
    scanf("%u", &v);
    scanf("%u", &v);

    packet_data.type = n;
    packet_data.index = v;
    packet_data.f1 = k;



     //extracts the type field from packed_data (automatically shifting it into the low-order bits as required) and assigns it to 'data'
     unsigned int data ;
     data = packet_data.type ;


     //Bit fields can be used in normal expressions and are automatically converted to integers.
     unsigned int i ;
     i = packet_data.index / 5 + 1;


     if( packet_data.f1 ){
         printf ("Flag 1 is valid");
     }



     //no guarantee whether the fields are internally assigned from left to right or from right to left.
     // This should not present a problem unless you are dealing with data that was created by a different program or by a different machine. In such cases, you must know how the bit fields are assigned and make the declarations appropriately
     //Never make any assumptions about how structure members— whether they contain bit field members or not—are stored.



// bit fields can only be of type  integer or _Bool
//you cannot have an array of fields, such as flag:1[5]
//no such thing as a type “pointer to bit field.
//If just int is used in the declaration, it’s implementation dependent whether this is interpreted as a signed or unsigned value.To play it safe, use the explicit declarations signed int or unsigned int.
// A special unnamed bit field of size 0 is used to force alignment on the next boundary.
//a bit field of size 0 indicates that the compiler should start a new integer to store thr next field  that comes,so f.e if we were storing f1 and f2 in int A , then if came fs : 0 between line 9 and 10 it would mean that f3 ,type,index shold ve been stored not in A but in some other integer 





    return 0;
}
