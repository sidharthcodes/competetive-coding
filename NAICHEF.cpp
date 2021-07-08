#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int n,a,b;
        float xa = 0,xb = 0;
        cin>>n>>a>>b;
        int x[n];
        for(int i=0; i<n; i++){
            cin>>x[i];
        }
        for(int i=0; i<n; i++){
            if(x[i] == a){
                xa += 1;
                if(x[i] == b)
                    xb += 1;
            }
            else if(x[i] == b){
                xb += 1;
            }
        }
        float ans = ((xa/n)*(xb/n));
        printf("%.10f\n",ans);
    }
	return 0;
}
