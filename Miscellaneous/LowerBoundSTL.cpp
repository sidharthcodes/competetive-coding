#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;


int main() {
    vector <int> arr;
    int n;
    cin>>n;
    int x;
    
    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }

    int q;
    cin>>q;

    for(int i=0; i<q; i++){
        int s;
        cin>>s;

        vector<int>::iterator itr = find(arr.begin(), arr.end(), s);
        if(itr != arr.end()){
            int index = std::distance(arr.begin(), itr);
            cout<<"Yes "<<index+1<<"\n";
        }else{
            for(auto i=arr.begin(); i != arr.end(); i++){
                if(*i > s){
                    vector<int>::iterator it = find(arr.begin(), arr.end(), *i);
                    int index = std::distance(arr.begin(), it);
                    cout<<"No "<<index+1<<"\n";
                    break;
                }
            }
        }
    }

    return 0;
}