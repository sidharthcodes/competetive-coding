#include <iostream>
using namespace std;

long int fact(int num){
	long int facto = 1;
	for(int i=1;i<=num;i++) facto *= i;
	return facto;
}

int main() {
    int t,num;
    cin>>t;
    while(t--){
        cin>>num;
        cout<<fact(num)<<"\n";
    }
	return 0;
}
