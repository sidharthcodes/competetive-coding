int Solution::pow(int x, int n, int d) {
    if (x == 0) return 0;
    if (n == 0) return 1;
    long long int ans = x;
    long long int rem = 1;
    while(n>1){
        if(n%2 == 1){
            rem = (rem*ans)%d;
        }
        ans = ((ans%d)*(ans%d))%d;
        n /= 2;
    }
    ans = (ans*rem) % d;
    if(ans<0)
        ans += d;
    return ans;
}   