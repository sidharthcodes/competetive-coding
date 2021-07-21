#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector <int> arr;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int f,s,e;
    cin>>f>>s>>e;

    arr.erase(arr.begin()+f-1);
    arr.erase(arr.begin()+s-1, arr.begin()+e-1);

    cout<<arr.size()<<"\n";
    for(auto i=arr.begin(); i != arr.end(); i++){
        cout<<*i<<" ";
    }

    return 0;
}
