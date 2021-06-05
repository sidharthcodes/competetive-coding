#include <iostream>
using namespace std;

int main() {
    
    int T,f,l,num;
    cin>>T;
    
    while(T--){
       cin>>num;
       l = num%10;
       
        f = num;
        
        while(f>=10){
           f = f/10;
        }
    
      cout<<f+l<<"\n";
    }
	
	return 0;
}
