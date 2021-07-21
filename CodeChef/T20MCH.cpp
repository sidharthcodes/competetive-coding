#include <iostream>
using namespace std;

int main() {
    int R, O, C;
    cin>>R>>O>>C;
    
    int rem_over = 20 - O;
    int max_run = rem_over*6*6;
    int team_run = C + max_run;
    
    if(team_run <= R){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
    
	return 0;
}
