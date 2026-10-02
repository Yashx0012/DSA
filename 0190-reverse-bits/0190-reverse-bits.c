int reverseBits(int n) {
    if (n == 0) {
        return 0;
    }
    int reverse = 0;
   for(int i=0;i<32;i++) {
        reverse = reverse <<1;
        reverse = (reverse) | (n & 1);
        n >>= 1;
    }
    return reverse;
}