#include <iostream>
using namespace std;

int main() {
    int t,num,flag;
    cin>>t;
    
    while(t--){
        cin>>num;
        flag = 1;
        for(int i=2; i<num; i++){
            if(num%i==0) flag=0;
        }
        if(flag) cout<<"yes\n";
        else cout<<"no\n";
    }
	return 0;
}
