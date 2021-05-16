#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        
        switch(num){
            case 2010:
            case 2015:
            case 2016:
            case 2017:
            case 2019: cout<<"HOSTED\n"; break;
            
            default: cout<<"NOT HOSTED\n";
        }
    }
	return 0;
}
