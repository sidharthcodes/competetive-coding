#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)  cin>>arr[i];
        int min=110, max=0, mini=0, maxi=0;
        for(int i=0; i<n; i++){
            if(arr[i]<min){
                min = arr[i];
                mini = i;
            }
            if(arr[i]>max){
                max = arr[i];
                maxi = i;
            }
        }
        if(mini<maxi)  cout<<min<<" "<<max<<"\n";         
        else  cout<<max<<" "<<min<<"\n";
    }
	return 0;
}