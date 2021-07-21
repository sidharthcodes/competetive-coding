#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int X,A,B;
        cin>>X>>A>>B;
        int value = A + (100 - X)*B;
        cout<<value*10<<"\n";
    }
	return 0;
}
