//
// Created by CST on 31-Mar-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n , max = 0 , min;
        cin>>n;
        if(n == 1){
            long long n2;
            cin>>n2;
            if(n2 > 1){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
            continue;
        }
        long long arr[n];
        for(long long i = 0 ; i < n ; ++i){
            cin>>arr[i];
            if(arr[i] > max){
                min = max;
                max = arr[i];
            }else{
                if(arr[i] > min)
                    min = arr[i];
            }
        }
        if((max - min) <= 1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
