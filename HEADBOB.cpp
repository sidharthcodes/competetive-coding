#include <iostream>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int flag = 0;
		int n;
		cin>>n;
		char data[n];
		for(int i=0; i<n; i++){
		    cin>>data[i];
		    if(data[i] == 'Y'){
		        flag = 1;
		    }else if(data[i] == 'I'){
		        flag = 2;
		    }
		}
		if(flag == 2){
		    cout<<"INDIAN\n";
		}else if(flag == 1){
		    cout<<"NOT INDIAN\n";
		}else{
		    cout<<"NOT SURE\n";
		}
	}
	return 0;
}
