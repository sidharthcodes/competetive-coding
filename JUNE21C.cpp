#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int xa, xb, Xa, Xb;
        cin>>xa>>xb>>Xa>>Xb;
        
        int req = (Xa/xa) + (Xb/xb);
        cout<<req<<"\n";
    }
	return 0;
}
