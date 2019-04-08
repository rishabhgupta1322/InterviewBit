int Solution::uniquePaths(int A, int B) {
    int i,j;
    vector<vector<int> > T(A,vector<int>(B,0));
    T[0][0] = 1; --A; --B;
    for(i=0;i<=A;i++){
        for(j=0;j<=B;j++){
            if(i-1 < 0 && j-1<0) continue;
            if(i-1 < 0) T[i][j] = T[i][j-1];
            else if(j-1 < 0) T[i][j] = T[i-1][j];
            else if(i-1 >= 0 && j-1 >= 0) T[i][j] = T[i-1][j] + T[i][j-1];
        }
    }
    return T[A][B];
}
