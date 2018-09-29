vector<int> Solution::getRow(int A) {
    vector<int> res;
    long long a,b;
    res.push_back(1);
    if(A > 0){
        res.push_back(1);
        for(int i=2;i<=A;i++){
            a = res[0]; 
            for(int j=1;j<res.size();j++){
                b = res[j];
                res[j] = a+b;
                a = b;
            }
            res.push_back(1);
        }
        
    }
    return res;
}
