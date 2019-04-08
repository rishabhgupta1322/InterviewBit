vector<vector<int> > Solution::generateMatrix(int n){
    int i=0,j=0,k;
    int count=1,lim=n*n;
    vector<vector<int> >a(n,vector<int>(n));
    while(count <= lim){
        for(k=j;k<n-j;k++) a[i][k] = count++;
        if(count > lim) break;
        for(k=i+1;k<n-i-1;k++) a[k][n-j-1] = count++;
        for(k=n-j-1;k>=j;k--) a[n-i-1][k] = count++;
        for(k=n-i-2;k>i;k--) a[k][j] = count++;
        i++; j++;
    }
    return a;
}
