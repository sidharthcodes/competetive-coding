#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    int m,c;
    cin>>m>>c;
    
    int x[100000], y[100000], p[100000], res[100000];
    int s1 = 0, s2 = 0;
    while(t--){
        cin>>x[t];
        cin>>y[t];
        cin>>p[t];
        
        res[t] = m*x[t] +c - y[t];
        if(res[t] > 0) s1 += p[t];
        else if(res[t] < 0) s2 += p[t];
        
    }
    if(s1 > s2) cout<<s1<<"\n";
    else cout<<s2<<"\n";
    
	return 0;
}
