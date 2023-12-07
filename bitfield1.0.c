#include <stdio.h>
// 000 [unused] 0 [f1] 0 [f2] 0 [f3] 00000000 [type] 000000000000000000 [index]

int main() {
    unsigned int packed_data ;
    int n ;
    scanf("%i",&n);// n is the value i wanna set to type and it has to be between 0 and 255

    //but first we have to make sure type field is filled with 0s
    packed_data =(packed_data & ~(0xff << 18 )) | ((n & 0xff) << 18);
    // It is basically first, setting 8 bits of the 'type' with 1 s and then with ones complement it makes all of them 0s
    //Then it ands it with packed data which basically sets type to 0 and anything to itself ,cuz anding with 1 returns the value itself
    // and n with 0xff ensures that n is between 0 and 255
    //it is shifting it to the left and ors it with packed data ,the type field of which is  set to 0s



    //Extracting data
    int data;
    data = (packed_data >> 18) & 0xff
// We basically need to and it with 0xff to set to 0 the data that comes before type such as f1 ,f2 ,f3  so
//since it is shifted first ,it means the data we need is at the lowest level so and ing with 0xff whic is basically the last bits are 1 and others are 0 ,it helps us to preserve the bits of data we need and set 0 to the ones we do not



    return 0;
}
