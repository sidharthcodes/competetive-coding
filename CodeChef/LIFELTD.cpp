#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        char a[9];
        int flag = 0;
        for(int i=0; i<9; i++){
            cin>>a[i];
        }
        for(int i=0; i<5; i++){
            if(i==0 || i==3 || i==1 || i==4){
                if(a[i] == 'l' && a[i+3] == 'l' && a[i+4] == 'l'){
                    flag = 1;
                }
            }
        }
        if(flag){
            cout<<"yes\n";
        }else{
            cout<<"no\n";
        }
    }
	return 0;
}
