#include<iostream>
using namespace std;

int main(){
    int n = 15;
    int i = 0;
    int bn[16];
    while(n>0){
        bn[i++] = n%2;
        n /= 2;
    }
    for(int j=i-1; j>=0; j--) cout<<bn[j];
    return 0;
}