#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int ar[1000];
    int T;
    cin>>T;
    while(T--){
        int n, k, index;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>ar[i];
        }
        cin>>k;
        int s = ar[k-1];
        sort(ar,ar+n);
        for(int i=0; i<n; i++){
            if(ar[i]==s){
                index = i;
            }
        }
        cout<<index+1<<"\n";
    }
}