#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int root = (-1 + sqrt(1+(8*n)))/2;
	    cout<<root<<"\n";
	}
	return 0;
}
