string Solution::addBinary(string s1, string s2) {
    string res="";
    if(s1.size() < s2.size()) swap(s1,s2);
    int i=s1.size()-1,j=s2.size()-1,rem=0;
    while(j>=0){
        if(s1[i]+s2[j]-'0'-'0'+rem == 3)
            res = '1'+res;
        else if(s1[i]+s2[j]-'0'-'0'+rem == 2){
            res = '0'+res; rem = 1;
        }else if(s1[i]+s2[j]-'0'-'0'+rem == 1){
            res = '1'+res; rem = 0;
        }else res = '0'+res;
        i--; j--;
    }
    while(i>=0){
        if(s1[i]-'0'+rem == 2)
            res = '0'+res;
        else if(s1[i]-'0'+rem == 1){
            res = '1'+res; rem = 0;
        }else
            res = '0'+res;
        i--;
    }
    if(rem>0)
        res = '1'+res;
    return res;
}
