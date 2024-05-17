#define l long long
l mod_exp_fast(l a , l b , l n){
    a = a % n ; // a mod n 
    l r = 1 ;
    while (b != 0){
        if (b & 1){
            r = (r * a) % n ; // {(r mod n ) * (a mod n )} mod n ==== ( a * r ) mod n 
        }
        a = (a * a) % n ; // {(a mod n )*(a mod n)} mod n  ===== (a ^ 2) mod n 
        b = b >> 1 ;
    }
    return r ; 
}

// (a * b) mod n = {(a mod n ) * ( b mod n )}mod n 
