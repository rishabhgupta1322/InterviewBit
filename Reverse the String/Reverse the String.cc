void Solution::reverseWords(string &s) {
    string res="",word;
    for(int i=s.size()-1;i>=0;i--){
        word="";
        while(s[i]!=' ' && i>=0) word = s[i--]+word;
        res = res + " " + word;
    }
    res.erase(res.begin());
    s = res;
}
