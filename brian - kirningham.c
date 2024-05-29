// Brian - Kirningham algorithm

unsigned int bit_set(unsigned int n){
    unsigned count = 0 ;
    while (n != 0){
        n = n & (n - 1);
        count ++;
    }
    return count ;
}