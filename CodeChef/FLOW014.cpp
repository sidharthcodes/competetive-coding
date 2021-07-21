#include <iostream>
using namespace std;

int main() {
    int t,h,s,grade;
    float c;
    cin>>t;
    while(t--){
        
        cin>>h>>c>>s;
        
        if(h>50 && c<0.7 && s>5600) grade = 10;
        else if(h>50 && c<0.7) grade = 9;
        else if(c<0.7 && s>5600) grade = 8;
        else if(h>50 && s>5600) grade = 7;
        else if(h>50 || c<0.7 || s>5600) grade = 6;
        else grade = 5;
        
        cout<<grade<<"\n";
    }
	return 0;
}
