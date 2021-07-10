#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        long long int n,b,m;
        cin>>n>>b>>m;
        long long int time = 0;
        while(n){
            if(n%2 == 0){
                time += (n/2)*m;
                n -= n/2;
            }else{
                time += ((n+1)/2)*m;
                n -= (n+1)/2;
            }
            time += b;
            m *= 2;
        }
        cout<<time-b<<"\n";
    }
	return 0;
}
