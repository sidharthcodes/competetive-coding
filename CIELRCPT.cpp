#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {1,2,4,8,16,32,64,128,256,512,1024,2048};
    int T;
    cin >> T;

    while(T--){
        int n, ans = 0;
        cin >>n;
        for(int i=11; i>=0; i--){
            if (n >= arr[i]){
                ans += n/arr[i];
                if(n%arr[i] == 0){
                    break;
                }
                else{
                    n -= ((n / arr[i]) * arr[i]);
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}