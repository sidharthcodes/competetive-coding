#include <iostream>
using namespace std;

int main() {
    
    int t, x, ctr;
    cin>>t;
    
    while(t--){
        cin>>x;
        
        ctr = 0;
        
        if(x%5 != 0){
            ctr = -1;
        }
        else{
            while(1){
              if(x%10 == 0){
                  break;
               }
                else{
                    x *= 2;
                    ctr++;
                }
            }
    }
        cout<<ctr<<"\n";
        }
	return 0;
}
