int Solution::maxArr(vector<int> &A) {
    int max1 = max2 = INT_MIN, 
        min1 = min2 = INT_MAX;
    /*
        |A[i] - A[j]| + |i - j|
        first maximize A[i] + i then calculate max - min
        then maximize  - A[j] by adding -j
    */
    for(int i=0; i<A.size(); i++)
    {
        max1 = max(max1, A[i]+i);
        min1 = min(min1, A[i]+i);
        max2 = max(max2, A[i]-i);
        min2 = min(min2, A[i]-i);
    }
    return max(max1-min1, max2-min2);
}
