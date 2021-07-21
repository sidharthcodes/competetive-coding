#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int arr[5],score=0;
        for(int i=0; i<5; i++){ 
         cin>>arr[i];
         if(arr[i]==1) score++;
        }

    if(score==0) cout<<"Beginner\n";
            if(score==1) cout<<"Junior Developer\n";
                    if(score==2) cout<<"Middle Developer\n";
                            if(score==3) cout<<"Senior Developer\n";
                                    if(score==4) cout<<"Hacker\n";
                                            if(score==5) cout<<"Jeff Dean\n";
    }
	return 0;
}
