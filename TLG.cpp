#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int last_a = 0, last_b = 0, max_lead = 0, winner = 0;
	while(n--){
		int a,b;
		cin>>a>>b;
		a += last_a;
		b += last_b;
		if(a > b){
			if((a-b) > max_lead){
				max_lead = a-b;
				winner = 1;
			}
		}else{
			if((b-a) > max_lead){
				max_lead = b-a;
				winner = 2;
			}			
		}
		last_a = a;
		last_b = b;
	}
	cout<<winner<<" "<<max_lead;
	return 0;
}
