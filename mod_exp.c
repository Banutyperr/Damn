
#define l long long
l mod_exp_fast(l a , l n , l m){
    a = a % m ;
    l r = 1 ;
    while (n != 0){
        if (n & 1){
            r = (r * a) % m ;
        }
        a = (a * a) % m ; 
        n = n >> 1 ;
    }
    return r ; 
}

