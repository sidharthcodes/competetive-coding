#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        unordered_map<string,int> my_map;
        for(int i=0; i<3*n; i++){
            string s;
            int num;
            cin>>s>>num;
            if(my_map.find(s) != my_map.end()){
                my_map[s] += num;
            }else{
                my_map.insert({s,num});
            }
        }
        vector<int> my_vec;
        for(auto i : my_map){
            my_vec.push_back(i.second);
        }
        sort(my_vec.begin(), my_vec.end());
        for(int i=0; i<my_vec.size(); ++i){
            cout<<my_vec[i]<<" ";
        }
        cout<<"\n";
    }
	return 0;
}
