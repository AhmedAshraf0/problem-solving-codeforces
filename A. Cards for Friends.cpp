//
// Created by CST on 08-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        bool f = false;
        int w , h , n , p = 1;
        cin>>w>>h>>n;
        while((w % 2 == 0) || (h % 2 == 0)){
            if((w % 2 == 0)){
                w /= 2;
            }else{
                h /= 2;
            }
            p += p;
            if(p >= n){
                cout<<"YES"<<endl;
                f = true;
                break;
            }
        }
        if(!f){
            if(p >= n){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
}
