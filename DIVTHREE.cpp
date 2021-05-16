#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int N,K,D;
        int j, q = 0;
        cin>>N>>K>>D;
        for(int i=0; i<N; i++){
            cin>>j;
            q += j;
        }
        int days = q/K;
        if(days > D){
            cout<<D<<"\n";
        }else{
            cout<<days<<"\n";
        }
        //cout<<"Q: "<<q<<" ; D: "<<days<<"\n";
    }
	return 0;
}
