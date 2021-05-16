#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        int price[n];
        int ans = 0, temp;
        for(int i=0; i<n; i++){
            cin>>price[i];
            if(price[i]>k){
                temp = price[i] - k;
                ans += temp;
            }
        }
        cout<<ans<<"\n";
    }
	
	return 0;
}
