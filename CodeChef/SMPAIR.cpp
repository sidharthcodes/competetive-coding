#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int min = arr[0], min_i = -1;
        for(int i=0; i<n; i++){
            if(arr[i]<min){
                min = arr[i];
                min_i = i;
            }
        }
        int min_2 = 2147483647;
        for(int i=0; i<n; i++){
            if(i != min_i){
                if(arr[i]<min_2){
                    min_2 = arr[i];
                }
            }
        }
        cout<<min+min_2<<"\n";
    }
	return 0;
}
