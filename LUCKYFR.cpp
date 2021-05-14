#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int N, rem, count = 0;
        cin>>N;
        while(N){
            rem = N%10;
            N /= 10;
            if(rem == 4){
                count++;
            }
        }
            cout<<count<<"\n";
    }
	return 0;
}
