vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> tri(A);
    for(auto i=0; i<A; i++){
        tri[i].resize(i+1);
        tri[i][0] = tri[i][i] = 1;
        for(auto j=0; j<i; j++)
            tri[i][j] = tri[i-1][j-1] + tri[i-1][j];
    }
    return tri;
}
