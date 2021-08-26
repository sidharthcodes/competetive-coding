vector<int> Solution::allFactors(int A) {
    vector<int> ans;
    int start = 0, end = 0;
    for(int i=1; i<=sqrt(A); i++){
        if(A%i == 0){
            ans.insert(ans.begin()+start, i);
            start++;
            if(i != sqrt(A)){
                ans.insert(ans.end()-end, A/i);
                end++;
            }
        }
    }
    return ans;
}