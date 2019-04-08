vector<vector<int> > Solution::solve(int A) {
    int i,j;
    vector<vector<int> > P;
    if(A == 0){
        return P;
    }
    P.resize(A);
    P[0].push_back(1);
    for(i=1;i<A;i++){
        P[i].push_back(1);
        for(j=1;j<P[i-1].size();j++)
            P[i].push_back(P[i-1][j]+P[i-1][j-1]);
        P[i].push_back(1);
    }
    return P;
}
