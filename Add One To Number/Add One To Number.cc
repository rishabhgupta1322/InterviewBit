vector<int> Solution::plusOne(vector<int> &A) {
    int carry = 1, tmp = 0;
    // Add Carry on LSB
    for(auto i=A.end(); i-- != A.begin() && carry;){
        tmp = *i + carry;
        *i = tmp % 10;
        carry = tmp / 10;
    }
    //  Insert number if carry returned at last
    if(carry)   A.insert(A.begin(), carry);
    // Remove trailing zeroes from MSB
    for(auto i=A.begin();*i == 0;)  A.erase(i, i+1);
    return A;
}
