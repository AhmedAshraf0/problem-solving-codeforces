//
// Created by CST on 11-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n % 3 == 0){
            cout<<n/3<<' '<<n/3<<endl;
        }else{
            int n1 = ceil(n/3.0), n2 = floor(n/3.0);
            if((n1 + n2 * 2) == n)
                cout<<n1<<' '<<n2<<endl;
            else
                cout<<n2<<' '<<n1<<endl;
        }
    }
}
