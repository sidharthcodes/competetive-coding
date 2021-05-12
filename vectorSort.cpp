#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector <int> arr;
    int n;
    cin>>n;

    for (int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());

    for (auto i=arr.begin(); i != arr.end(); i++){
        cout<<*i<<" ";
    }
    return 0;
}