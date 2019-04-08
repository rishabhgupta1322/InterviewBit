int Solution::trailingZeroes(int A) {
    int res=0;
    while(A){
        A /= 5;
        res += A;
    }
    return res;
}
