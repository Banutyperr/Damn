unsigned int Cnt_set_bits_rec(unsigned int n ){
	if(n == 0){
		return 0 
	}
	else {
		return (n & 1) + Cnt_set_bits_rec(n >> 1)
	}
unsigned int Cnt_set_bits(unsigned int n ){
	unsigned int result = 0 ;
	while( n ){
		result += n & 1
		n >>= 1 
	}
	return result

		

 
		