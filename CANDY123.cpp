#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int ma, mb;
        cin>>ma>>mb;
        int ca = 0, cb = 0, itr = 1;
        while(ca<=ma || cb<=mb){
            if(itr%2==0){
                cb += itr;
            }else{
                ca += itr;
            }
            itr += 1;
        }
        cout<<(ca>cb?"Limak":"Bob")<<"\n";
    }
	return 0;
}
