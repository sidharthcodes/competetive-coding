#include <iostream>
using namespace std;

int isPrime(int num){
    for(int i=2; i<num; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin>>T;
    while(T--){
        int x,y;
        cin>>x>>y;
        int sum = x + y;
        sum += 1;
        int ans = 1;
        while(!isPrime(sum)){
            sum += 1;
            ans += 1;
        }
        cout<<ans<<"\n";
    }
	return 0;
}
