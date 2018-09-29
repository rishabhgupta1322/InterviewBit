int Solution::majorityElement(const vector<int> &B) {
    vector<long long> A(B.size());
    for(int i=0;i<B.size();i++) A[i] = B[i];
    sort(A.begin(),A.end());
    return A[A.size()/2];
}
