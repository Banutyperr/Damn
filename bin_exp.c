 
long long int bin_exp(long long a, long long n) {
    long long r = 1;
    while (n != 0) {
        if (n & 1) {
            r *= a;
        }
        a *= a; 
        n >>= 1;
    }
    return r;
}

