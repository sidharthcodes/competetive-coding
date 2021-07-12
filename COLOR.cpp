#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int max=0;
        char s[100010] = {'\0'};
        cin>>s;
        int c[3];
        for(int i=0; i<3; i++)
            c[i]=0;
        for(int i=0; i<n; i++){
            if(s[i] == 'R'){
                c[0]++;
                if(max<c[0])
                    max=c[0];
            }else if(s[i] == 'G'){
                c[1]++;
                if(max<c[1])
                    max=c[1];
            }else if(s[i] == 'B'){
                c[2]++;
                if(max<c[2])
                    max=c[2];
            }
        }
        cout<<n-max<<"\n";
    }
	return 0;
}
