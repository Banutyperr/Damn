
int arr [32];

void bin_rep_bit_1(int x) {
    for (int i = 31 ; i >= 0 ; --i) {
        if ((x >>i) &1 != 0) {
            arr[31-i] = 1;
        } else {
            arr[31-i] = 0;
        }
    }
}



