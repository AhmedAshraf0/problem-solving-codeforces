//
// Created by CST on 20-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l , r , n;
        cin>>l>>r>>n;
        if(l < n){
            cout<<n-1<<endl;
        }else{
            if(r % n != 0){
                cout<<r/n+r%n<<endl;
            }else{
                --r;
                cout<<r/n+r%n<<endl;
            }
        }
    }
}
