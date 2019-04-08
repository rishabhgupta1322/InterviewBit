vector<string> Solution::fizzBuzz(int A) {
    vector<string> res;
    string s; int t; char ch;
    for(int i=1;i<=A;i++){
        if(i%15 == 0) res.push_back("FizzBuzz");
        else if(i%3 == 0) res.push_back("Fizz");
        else if(i%5 == 0) res.push_back("Buzz");
        else{
            s = "";
            t = i;
            while(t){
                ch = t%10 +'0';
                s = ch + s;
                t/=10;
            }
            res.push_back(s);
        }
    }
    return res;
}
