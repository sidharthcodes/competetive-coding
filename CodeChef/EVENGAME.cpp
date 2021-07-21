#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int n, sum = 0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum += a[i];
        }
        if(sum%2==0){
            cout<<"1\n";
        }else{
            cout<<"2\n";
        }
    }
	return 0;
}
