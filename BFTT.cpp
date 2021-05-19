#include <iostream>
using namespace std;

int checkThree(int x){
    int count = 0;
    while(x){
        int c = x%10;
        if(c == 3) count++;
        x /= 10;
    }
    if(count >= 3){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n, flag=1, itr;
        cin>>n;
        itr=n+1;
        while(flag){
            int ch = checkThree(itr);
            if(ch == 1){
                cout<<itr<<"\n";
                break;
            }else{
                itr++;
            }
        }
    }
	return 0;
}
