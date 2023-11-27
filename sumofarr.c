#include <stdio.h>


int arraySum(int array[], const int n) {
    int sum = 0, *ptr;

    int *const arrayEnd = array + n; // const pointer to type int ,n = size of the array to make sure we do not increment the pointer to the point where it exceeds the array size !!!

    for (ptr = array; ptr < arrayEnd; ++ptr)
        sum += *ptr;//ptr is a pointer we get the value it points to by adding * to its beginning,since it points to all  the elements of an array by incrementation , we simply sum up all the values of the elements ptr points at

    return sum;
}


int main() {

    int arraySum(int array[], const int n);

    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("The sum is %i \n", arraySum(values, 10));


    return 0;
}
