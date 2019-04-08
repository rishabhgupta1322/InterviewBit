vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int> > res;
    res.resize(A.size()*2-1);
    int i=0,j=0,i1,j1,k=0;
    while(i<A.size() && j<A.size()){
        i1 = i; j1 = j;
        while(i1<A.size() && j1>=0){
            res[k].push_back(A[i1++][j1--]);
        }
        if(j+1<A.size()) j++;
        else i++;
        k++;
    }
    return res;
}
