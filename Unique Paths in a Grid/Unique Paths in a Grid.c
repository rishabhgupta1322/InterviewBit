int uniquePathsWithObstacles(int** a, int m, int n) {
    if(a[0][0]==1 || a[m-1][n-1]==1) return 0;
    int res[m][n],i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++){
            if(a[i][j]) res[i][j] = -1;
            else res[i][j] = 0;
        }
    res[0][0] = 1;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i-1 < 0 && j-1>=0 && res[i][j-1]!=-1 && res[i][j]!=-1)
                res[i][j] += res[i][j-1];
            else if(j-1<0 && i-1>=0 && res[i-1][j]!=-1 && res[i][j]!=-1)
                res[i][j] += res[i-1][j];
            else if(i-1>=0 && j-1>=0 && res[i-1][j]!=-1 && res[i][j-1]==-1 && res[i][j]!=-1)
                res[i][j] += res[i-1][j];
            else if(i-1>=0 && j-1>=0 && res[i-1][j]==-1 && res[i][j-1]!=-1 && res[i][j]!=-1)
                res[i][j] += res[i][j-1];
            else if(i-1>=0 && j-1>=0 && res[i-1][j]!=-1 && res[i][j-1]!=-1 && res[i][j]!=-1)
                res[i][j] += res[i-1][j] + res[i][j-1];
        }
    }
    return res[m-1][n-1];
}
