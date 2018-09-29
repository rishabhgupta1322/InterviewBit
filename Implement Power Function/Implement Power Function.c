int powmod(int x, int n, int d) {
    if(x == 0) return 0;
    else if(n == 0) return 1;
    else if(n == 1){
        if(x > 0) return x;
        else return d+x;
    }
    else{
        long long a = powmod(x,n/2,d);
        if(n%2)
            return (x*(((a%d)*(a%d))%d))%d;
        else
            return ((a%d)*(a%d))%d;
    }
}
