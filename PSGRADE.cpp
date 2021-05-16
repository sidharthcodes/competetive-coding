#include <iostream>
using namespace std;

int main() {
    int T;
    int a,b,c,thr,A,B,C;
    cin>>T;
    while(T--){
        cin>>a>>b>>c>>thr>>A>>B>>C;
        if(A>=a && B>=b && C>=c && ((A+B+C) >= thr)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        
    }
	return 0;
}
