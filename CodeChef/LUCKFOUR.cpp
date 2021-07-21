#include <iostream>
using namespace std;

int main() {
    
    int num,t,ch,count;

	cin>>t;

	while(t--){
		
		cin>>num;
        count = 0;
    
        while(num>0){
			ch = num%10;
			if(ch == 4) count++;
			num = num/10;
        }

	cout<<count<<"\n";
	}
	return 0;
}
