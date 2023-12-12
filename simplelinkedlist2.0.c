#include <stdio.h>

int main() {
    struct entry {
        int value;
        struct entry * next;
    };

    struct entry n1,n2,n3;
    int  i , j;

    n1.value = 100 ;
    n2.value = 200 ;
    n3.value = 300 ;



   n1.next = &n2;//n1.next is of type struct entry ,and it points to the entire n2 which is also of type struct entry
   n2.next = &n3 ;


   n2.next -> value ;//the same meaning as (*n2.next)[which is n3].value [n3.value]
  //here we are assigning i to the pointer 's 'value' of the pointed by n1.next 's value ,where *n1.next = n2 and *n1.next.value is n2.value

   printf("%i",n1.next->next->value);//==(|*(|*n1.next)|.next)|.value)


    return 0;
}
