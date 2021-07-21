#include <iostream>
using namespace std;

int countSort(int A[], int S){
    
    int max = A[0];
    for(int i=0; i<S; i++){
        if(A[i]>max) max = A[i];
    }

    int count[max+1];
    
    for(int i=0; i<=max; i++)  count[i] = 0;

    for(int i=0; i<S; i++)  count[A[i]] += 1;

    for(int i=0; i<=max; i++){  
      while(count[i]>=1){
      cout<<i<<"\n";
      count[i]--;
      } 
    }
    return 0;
  }

int main() {
    
    int s;
    cin>>s;
    int arr[s];
    
    for(int i=0; i<s; i++) cin>>arr[i];

    countSort(arr,s);
        
	return 0;
}