#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int t,q,p;
    long double ex;
    cin>>t;
    while(t--){
        cin>>q>>p;
        if(q>1000)  ex = (0.9)*q*p;
        else    ex = q*p;
        cout<<fixed<<ex<<"\n";
    }
	return 0;
}
