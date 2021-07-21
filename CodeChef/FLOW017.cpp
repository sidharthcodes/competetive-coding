#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        
        int a,b,c,lar,max;
        cin>>a>>b>>c;
        
        max = a;
        if(b>max) max = b;
        if(c>max) max = c;
        
        if(max == a){
            if(b>c) lar = b;
            else lar = c;
        }
        if(max == b){
            if(a>c) lar = a;
            else lar = c;
        }
        if(max == c){
            if(a>b) lar = a;
            else lar = b;
        }
        
        cout<<lar<<"\n";
        
    }
	return 0;
}
