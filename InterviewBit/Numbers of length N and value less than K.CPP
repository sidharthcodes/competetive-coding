#define MAX 10

int Solution::solve(vector<int> &A, int B, int C) {
    vector<int> digit;
    while(C != 0){
        digit.push_back(C % 10);
        C /= 10;
    }
    if (digit.size() == 0)
        digit.push_back(0);
    reverse(digit.begin(), digit.end());
    int s = A.size(), d2;

    //Case 1 : When B is greater than length of C
    if (B > digit.size() || s == 0)
        return 0;
 
    //Case 2: When B is smaller than length of C
    else if (B < digit.size()) {
        if (A[0] == 0 && B != 1)
            return (s - 1) * pow(s, B - 1);
        else
            return pow(s, B);
    }else{
        //Case 3: When B is equal to length of C
        int dp[B+1] = {0};
        int lower[MAX + 1] = {0};
        for(int i=0; i<s; i++)
            lower[A[i]+1] = 1;
        for(int i=1; i<=MAX; i++)
            lower[i] = lower[i-1] + lower[i];
        bool flag = true;
        dp[0] = 0;
        for(int i=1; i<=B; i++){
            d2 = lower[digit[i - 1]];
            dp[i] = dp[i - 1] * s;
            if(i==1 && A[0]==0 && B!=1)
                d2 = d2 - 1;
            if(flag)
                dp[i] += d2;
            flag = (flag & (lower[digit[i-1]+1] == lower[digit[i-1]]+1));
        }
        return dp[B];
    }
}
