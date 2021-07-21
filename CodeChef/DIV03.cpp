#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int A[10], k;
        for(int i=0; i<10; i++){
            cin>>A[i];
        }
        cin>>k;
        while(k){
            for(int i=9; i>=0; i--){
                if(A[i]>k){
                    A[i] -= k;
                    k = 0;
                }else if(A[i]<k){
                    k -= A[i];
                    A[i] = 0;
                }else if(A[i] == k){
                    A[i] = 0;
                    k = 0;
                }
            }
        }
        for(int i=9; i>=0; i--){
            if(A[i] != 0){
                cout<<i+1<<"\n";
                break;
            }
        }
    }
	return 0;
}
