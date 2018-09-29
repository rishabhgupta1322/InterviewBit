int Solution::isInterleave(string s1, string s2, string s3) {
    int i=0,j=0,k=0;
    while(s3[k]){
        if(s1[i] == s3[k] && s2[j] == s3[k]){
            i++; j++;
        }else if(s1[i] == s3[k]) i++;
        else if(s2[j] == s3[k]) j++;
        k++;
        if(i == s1.size() && j == s2.size()) return true;
    }
    return false;
}
