#include <iostream>
using namespace std;

int main() {
    int N,H,x;
    cin>>N>>H>>x;
    int T[N];
    for(int i=0; i<N; i++){
        cin>>T[i];
        if(T[i]+x >= H){
            cout<<"YES\n";
            goto END;
        }
    }
    cout<<"NO\n";
    END:
	return 0;
}
