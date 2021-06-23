#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int n,m,k;
        cin>>n>>m>>k;
        while(k>0){
            if(n>m){
                m += 1;
            }else if(m>n){
                n += 1;
            }
            // else{
            //     if(k%2 == 0){
            //         n += k/2;
            //         m += k/2;
            //         k = 0;
            //     }else{
            //         n += 1;
            //         k = 0;
            //     }
            // }
            k -= 1;
        }
        int diff = (n>m)? n-m : m-n;
        cout<<diff<<"\n";
    }
	return 0;
}
