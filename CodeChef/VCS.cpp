#include <iostream>
using namespace std;

int main() {
    int T, a[101] = {0}, b[101] = {0};
    cin>>T;
    while(T--) {
        int ans1 = 0, ans2 = 0, f;
        int n,m,k;
        cin>>n>>m>>k;
        for(int i=1; i<=m; i++) {
            cin>>f;
            a[f]++;
        }
        for(int i=1; i<=k; i++) {
            cin>>f;
            b[f]++;
        }
        for(int i=1; i<=n; i++){
            if(a[i]==1 && b[i]==1){
                ans1++;
            }else if(a[i]==0 && b[i]==0){
                ans2++;
            }
            a[i]=0;
            b[i]=0;
        }
        cout<<ans1<<" "<<ans2<<"\n";
    }
}