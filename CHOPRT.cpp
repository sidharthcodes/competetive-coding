#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int num1,num2;
        
        cin>>num1;
        cin>>num2;
        
        if(num1 < num2) cout<<"<\n";
        if(num1 > num2) cout<<">\n";
        if(num1 == num2) cout<<"=\n";
    }
	return 0;
}
