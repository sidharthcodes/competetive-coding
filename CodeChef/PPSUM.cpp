#include <iostream>
using namespace std;

int sum(int n){
    int sum = 0;
    for(int i=n; i>=1; i--){
        sum += i;
    }
    return sum;
}

int main() {
    int T;
    cin>>T;
    while(T--){
        int d,n;
        int val = 0;
        cin>>d>>n;
        if(d==1){
            val = sum(n);
        }else{
            while(d--){
                val = sum(n);
                n = sum(n);
            }
        }
        cout<<val<<"\n";
    }
	return 0;
}
