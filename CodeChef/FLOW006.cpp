#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
    int r,num,sum=0;
    cin>>num;
    while(num > 0){
        r = num%10;
        sum += r;
        num /= 10;
    }
    cout<<sum<<"\n";
    }
	return 0;
}
