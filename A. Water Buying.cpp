//
// Created by CST on 06-Mar-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){//v1 = a
        long long a , b , c , v1 , v2;
        cin>>a>>b>>c;
        v1 = a;
        if(a % 2 != 0){
            v2 = ceil((double)a/2);
            v1 *= b;
            v2 *= c;
            if(v2 % 2 != 0){
                v2++;
            }
            cout<<min(v1,v2)<<endl;
            continue;
        }
        v2 = a/2;
        v1 *= b;
        v2 *= c;
        cout<<min(v1,v2)<<endl;
    }
}
