//
// Created by CST on 21-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , even = 0 , odd = 0;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ; ++i){
            cin>>arr[i];
            if(arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if(even == 0 || odd == 0)
            cout<<"yes";
        else{
            int o = 0, e = 0;
            for(int i = 0 ; i < n ; i += 2){
                if(arr[i] % 2 == 0)
                    e++;
                else
                    o++;
            }
            if(e != 0 && o != 0){
                cout<<"no"<<endl;
                continue;
            }
            int oo = 0,ee = 0;
            for(int i = 1 ; i < n ; i += 2){
                if(arr[i] % 2 == 0)
                    ee++;
                else
                    oo++;
            }
            if(ee == 0 || oo == 0)
                cout<<"yes";
            else
                cout<<"no";
        }
        cout<<endl;

    }
}
