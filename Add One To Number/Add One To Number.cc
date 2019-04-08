vector<int> Solution::plusOne(vector<int> &A) {
    int n=A.size(),carry=0,i,j=0;
    vector<int>res;
    res.push_back((1+A[n-1])%10);
    carry=(1+A[n-1])/10;
    while(j<n && A[j] == 0) j++;
    for(i=n-2;i>=0 && A[i]+carry > 0;i--){
        res.push_back((carry+A[i])%10);
        carry=(carry+A[i])/10;
    }
    while(i>=j) res.push_back(A[i--]);
    if(carry) res.push_back(1);
    reverse(res.begin(),res.end());
    return res;
}
