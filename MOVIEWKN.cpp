#include <iostream>
using namespace std;

int main(){
	int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int l[n],r[n],temp,sum=0,ans,rat;
        for(int i=0;i<n;i++){
            cin>>l[i];
        }
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        for(int j=0;j<n;j++){
            temp=l[j]+r[j];
            if(temp>sum){
                ans=j;
                rat=r[j];
                sum=temp;
            }
            else if(temp==sum){
                if(r[j]>rat){
                    ans=j;
                    rat=r[j];
                    sum=temp;
                }
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}
