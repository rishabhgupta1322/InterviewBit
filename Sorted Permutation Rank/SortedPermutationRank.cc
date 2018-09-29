int Solution::findRank(string A) {
    long fact[A.size()],count[A.size()],c=0,res=1;
    fact[0] = fact[1] = 1;
    for(int i=2;i<A.size();i++)
        fact[i] = ((fact[i-1]%1000003)*(i%1000003))%1000003;
    for(int i=0;A[i];i++){
        c = 0;
        for(int j=i;A[j];j++)
            if(A[i]>A[j]) c++;
        count[i] = c;
    }
    for(int i=0;i<A.size();i++){
        res += count[A.size()-i-1]*fact[i];
        res %= 1000003;
    }
    return res;
}
