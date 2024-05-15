

int arr[32];

void bin_rep_bit(int x) {
    for (int i = 31; i >= 0; --i) {
        if ((x & (1 << i)) != 0) {
            arr[31-i] = 1;
        } else {
            arr[31-i] = 0;
        }
    }
}

