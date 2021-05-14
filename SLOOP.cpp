#include <iostream>
using namespace std;

int main() {
    int T, times;
    cin>>T;
    while(T--){
        int M,S;
        cin>>M>>S;
        if(S>M){
            times = 0;
        }else{
            times = abs(M/S);
        }
        cout<<times<<"\n";
    }
	return 0;
}
