int Solution::lengthOfLastWord(const string A) {
    int cnt=0;
    int i=A.size()-1;
    while(A[i]==' ') i--;
    for(; i>=0 && A[i]!=' '; i--)
        cnt++;
    return cnt;
}
