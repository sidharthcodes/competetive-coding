#include <iostream>
using namespace std;

int main() {
    int T;
    int x,y,xr,yr,d;
    cin>>T;
    while(T--){
        cin>>x>>y>>xr>>yr>>d;
        int x_ = x/xr;
        int y_ = y/yr;
        int day_left;
        (x_ < y_) ? day_left = x_ : day_left = y_ ;
        if(day_left >= d){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
	return 0;
}
