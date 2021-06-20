#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int ans = 0;
        for(int i=1; i<=n; i++){
            int x,y;
            cin>>x>>y;
            ans = ans^i;
        }
        cout<<ans<<"\n";
    }
	return 0;
}
