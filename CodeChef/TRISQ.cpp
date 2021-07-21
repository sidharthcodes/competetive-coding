#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int b;
        cin>>b;
        b -= 2;
        b /= 2;
        cout<<b*(b+1)/2<<"\n";
    }
	return 0;
}
