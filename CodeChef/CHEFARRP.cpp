#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int sum, product, ans = 0;
        for(int i=0; i<n; i++){
            sum = a[i], product = a[i];
            for(int j=i+1; j<n; j++){
                sum += a[j];
                product *= a[j];
                if(sum == product){
                    ans += 1;
                }
            }
        }
        ans += n;
        cout<<ans<<"\n";
    }
	return 0;
}
