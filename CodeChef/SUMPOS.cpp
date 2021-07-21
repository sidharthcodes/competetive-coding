#include <iostream>
using namespace std;

int main() {
    int T,x,y,z;
    cin>>T;
    while(T--){
        cin>>x>>y>>z;
        if(x>y && x>z){
            if(y+z == x){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else if(y>z && y>x){
            if(x+z == y){
                cout<<"YES\n";
            }
        }else{
            if(x+y == z){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
	return 0;
}
