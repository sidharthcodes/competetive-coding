#include <iostream>
using namespace std;

int main() {
    int l,b;
    cin>>l>>b;
    
    int peri = 2*(l+b);
    int area = l*b;
    
    if(peri == area){
        cout<<"Eq\n";
        cout<<area;
        }
    else if(area > peri){
        cout<<"Area\n";
        cout<<area;
        }
    else{
        cout<<"Peri\n";
        cout<<peri;
        }
	
	return 0;
}
