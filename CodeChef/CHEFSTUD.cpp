#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count=0;
        
        for(int i=0; s[i]!='\0'; i++){
            if(s[i]=='<') s[i] = '>';
            else if(s[i]=='>') s[i] = '<';
        }
        for(int i=0; s[i]!='\0'; i++){
            if(s[i]=='>' && s[i+1]=='<') count++;
        }
        cout<<count<<"\n";
    }
	return 0;
}
