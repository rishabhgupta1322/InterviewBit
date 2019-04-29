int Solution::maxSubArray(const vector<int> &A) {
    int max, curr_max = 0;
    // Find maximun element
    max = *max_element(A.begin(), A.end()); // c++11
    // if max is less than zero return it
    if ( max < 1 ) return max;
    // if max is not negative number
    for ( auto i = A.begin(); i != A.end(); ++i )
    {
        curr_max += *i;
        if ( max < curr_max ) max = curr_max;
        if ( curr_max < 0 ) curr_max = 0;
    }
    return max;
}
