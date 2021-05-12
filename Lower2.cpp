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
    int s;
    
    for(int i=0; i<q; i++){
        cin>>s;
        vector<int>::iterator itr = find(arr.begin(), arr.end(), s);
        if(itr != arr.end()){
            int index = std::distance(arr.begin(), itr);
            cout<<"Yes "<<index+1<<"\n";
            }
            else{
                vector<int>::iterator it;
                for(it = arr.begin(); it != arr.end(); it++){
                    if(*it > s){
                        int index = std::distance(arr.begin(), it);
                        cout<<"No "<<index+1<<"\n";
                        break;
                    }
                }
            }
    }

    return 0;
}
