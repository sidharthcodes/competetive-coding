#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int n, b;
        cin>>n>>b;
        int w[n], h[n], p[n];
        int max = 0;
        for(int i=0; i<n; i++){
            cin>>w[i]>>h[i]>>p[i];
            if((w[i]*h[i]) > max){
                if(p[i]<=b){
                    max = w[i]*h[i];
                }
            }
        }
        if(max){
            cout<<max<<"\n";
        }else{
            cout<<"no tablet\n";
        }
    }
	return 0;
}
