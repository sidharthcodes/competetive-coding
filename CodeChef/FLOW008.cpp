#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int num;
        cin>>num;
        if(num<10) cout<<"What an obedient servant you are!\n";
        else cout<<"-1\n";
    }
	return 0;
}
