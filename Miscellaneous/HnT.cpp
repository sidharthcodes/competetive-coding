#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int t;
        cin>>t;
        for(int i=0; i<t; i++){
            int list[t], sc[t];
            int s,p;
            cin>>p>>s;
            list[i] = p;
            sc[i] = s;
            for(int j=0; list[j] != '\0'; j++){
                if(list[j] == p){
                    if(sc[j] < s){
                        sc[j] = s;
                    }
                }
            }
            cout<<list<<" * "<<score;
        }
    }
	return 0;
}