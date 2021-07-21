#include <iostream>
using namespace std;

int main() {
    int T, M, H, bmi;
    cin>>T;
    while(T--){
        cin>>M>>H;
        bmi = M/(H*H);
        if(bmi <= 18){
            cout<<"1\n";
        }else if(bmi >= 19 && bmi <= 24){
            cout<<"2\n";
        }else if(bmi >= 25 && bmi <= 29){
            cout<<"3\n";
        }else{
            cout<<"4\n";
        }
    }
	return 0;
}
