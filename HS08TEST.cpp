#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x;
    float y;
    cin>>x>>y;
    if(x<1999 && x%5 == 0){
        if(x <= y-0.5){
            y -= x;
            y -= 0.5;
        }
    }
    cout<<fixed<<setprecision(2)<<y;
	return 0;
}
