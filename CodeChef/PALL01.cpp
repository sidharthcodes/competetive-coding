#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    int rem,temp,num;
    while(t--){
        cin>>num;
        temp = num;
        int rev = 0;
        while(temp){
            rem = temp%10;
            rev = rev*10 + rem;
            temp /= 10;
        }
        if(num == rev) cout<<"wins\n";
        else cout<<"losses\n";
    }
	return 0;
}
