int Solution::titleToNumber(string A) {
    int s = A.size(), ans = 0;
    int j = s-1;
    for(int i=0; i<s; i++){
        ans += pow(26,j)*(A[i]-'A' + 1);
        j--;
    }
    return ans;
}
