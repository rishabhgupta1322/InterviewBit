int Solution::maxSubArray(const vector<int> &A) {
    int i, pos, max=A[0], curr_max=0;
    for(i=0;i<A.size();i++)
        if(A[i]>max){ 
            max = A[i]; 
            pos = i;
        }
    if(max <= 0){
        return max;
    }
    for(i=0;i<A.size();i++){
        curr_max += A[i];
        if(max < curr_max){
            max = curr_max;
            pos = i;
        }
        if(curr_max < 0) curr_max = 0;
    }
    return max;
}
