int Solution::power(string s) {
    int c1,c2;
    while(true){
        c1=0,c2=0;
        if(s[s.size()-1]=='2') c1++;
        for(int i=s.size()-1;i>=0;i--)
            if(s[i]>'0') c2++;
        if(c1==c2==1) return true;
        for(int i=s.size()-1;i>=0;i--){
            if((s[i]-'0')%2) return false;
            else{
                if(i!=0 && (s[i-1]-'0')%2){
                    --s[i-1];
                    s[i] = (s[i]-'0'+10)/2 + '0';
                }else
                    s[i] = (s[i]-'0')/2 +'0';
            }
        }
    }
}
