#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        int ca=0, cb=0, i=0;
        
        while(s[i]){
            if(s[i]=='a') ca++;
            else if(s[i]=='b') cb++;
            i++;
        }
        if(ca<=cb) cout<<ca<<"\n";
        else cout<<cb<<"\n";
    }
	return 0;
}
