long mod_(long a , long b , long n ){
        a = a % n ;
        long r = 1L;
        while (b != 0){
            if (b & 1){
                r = (r * a ) % n ; 
            }
            a = ( a * a ) % n ;
            b = b >> 1 ;
        }
        return r;
    }
    