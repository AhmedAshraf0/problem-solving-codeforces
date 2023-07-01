//
// Created by CST on 24-Feb-22.
//
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        n -= ((n/2) + 1);
        cout<<n<<endl;
    }
}
