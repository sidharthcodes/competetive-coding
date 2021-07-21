#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        
        int num;
        cin>>num;
        int rem,rev=0;
        
    while(num){
		rem = num%10;
		rev = rev*10 + rem;
		num = num / 10;
	    }
    
    cout<<rev<<"\n";
    }
	return 0;
}
