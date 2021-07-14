#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
		int x[3], y[3], con=0;
		int r;
		cin>>r;
		int n=3;
		while(n--){
			cin>>x[n]>>y[n];
		}
		if(sqrt(pow(x[0]-x[1],2)+pow(y[0]-y[1],2)) <= r)
			con++;
		if(sqrt(pow(x[0]-x[2],2)+pow(y[0]-y[2],2)) <= r)
			con++;
		if(sqrt(pow(x[2]-x[1],2)+pow(y[2]-y[1],2)) <= r)
			con++;
		if(con >= 2)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
	return 0;
}
