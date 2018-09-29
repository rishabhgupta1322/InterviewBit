bool check(char &a){
    if((a>='a' && a<='z') || (a>='0' && a<='9'))
        return true;
    if(a>='A' && a<='Z'){
        a = a+32;
        return true;
    }
    return false;
}

int Solution::isPalindrome(string A) {
    int beg=0,end=A.size()-1;
    while(beg<end){
        while(A[beg] && !check(A[beg])) beg++;
        while(end>=0 && !check(A[end])) end--;
        if(beg>=end) break;
        if(A[beg]!=A[end]) return false;
        beg++; end--;
    }
    return true;
}
