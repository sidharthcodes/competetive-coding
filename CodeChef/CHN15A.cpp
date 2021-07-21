#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n,k,count=0;
        cin>>n; // no. of minion
        cin>>k; // additive factor
        
        int ar[n];
        
        for(int i=0; i<n; i++){
            cin>>ar[i];
            ar[i] += k;
            if(ar[i]%7==0) count++;
        }
        cout<<count<<"\n";
    }
	return 0;
}
