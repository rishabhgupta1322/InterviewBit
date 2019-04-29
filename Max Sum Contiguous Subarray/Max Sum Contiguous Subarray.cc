int Solution::maxSubArray(const vector<int> &A) {
    int max, curr_max = 0;
    for ( auto i = A.begin(); i != A.end(); ++i )
    {
        curr_max += *i;
        if ( i == A.begin() || max < curr_max ) max = curr_max;
        if ( curr_max < 0 ) curr_max = 0;
    }
    return max;
}
