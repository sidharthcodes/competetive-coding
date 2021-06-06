#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int sal;
        float hra,da,gross;
        cin>>sal;
        
        if(sal<1500){
            hra = (0.1)*sal;
            da = (0.9)*sal;
        }
        else{
            hra = 500;
            da = (0.98)*sal;
        }
    gross = sal + hra + da;
    cout<<fixed<<setprecision(2)<<gross<<"\n";
    }
	return 0;
}
