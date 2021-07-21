#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    vector<vector<int> > arr;
    
    int n;
    cin>>n;
    int q;
    cin>>q;

    for(int i=0; i<n; i++){
        
        int s;
        cin>>s;
        vector<int> v1;

        for(int j=0; j<s; j++){
            int x;
            cin>>x;
            v1.push_back(x);
        }
        arr.push_back(v1);
    }

    for(int i=0; i<q; i++){
        int a, b;
        cin>>a>>b;
        auto element = (arr.at(a)).at(b);
        
        cout<<element<<"\n";
    }
    
    
    return 0;
}
