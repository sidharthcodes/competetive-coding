bool sortString(string S1,string S2){
    return S1+S2 > S2+S1;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<string>myStr;
    for(int i=0; i<A.size(); i++){
        string s;
        s = to_string(A[i]);
        myStr.push_back(s);
    }
    sort(myStr.begin(), myStr.end(), sortString);
    string ans;
    for(int i=0; i<myStr.size(); i++){
        ans += myStr[i];
    }
    int i=0;
    while(ans[i] == '0' && i+1 < ans.size()){
        i++;
    }
    return ans.substr(i);
}
