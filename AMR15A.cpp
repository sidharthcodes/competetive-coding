#include <iostream>
using namespace std;

int main() {
    int t,num;
    cin>>t;
    int even=0,odd=0;
    while(t--){
        cin>>num;
        if(num%2==0) even++;
        else odd++;
    }
    if(even>odd) cout<<"READY FOR BATTLE";
    else cout<<"NOT READY";

	return 0;
}
