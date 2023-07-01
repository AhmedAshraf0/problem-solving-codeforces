//
// Created by CST on 23-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , mi , m;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ; ++i){
            cin>>arr[i];
            if(i == 1){
                if(arr[0] > arr[1]){
                    m = 0;
                    mi = 1;
                }else if(arr[0] < arr[1]){
                    m = 1;
                    mi = 0;
                }else{
                    m = 0;
                    mi = 0;
                }
            }else if(i >= 2){
                if(arr[i] > arr[m])
                    m = i;
                else if(arr[i] < arr[mi])
                    mi = i;
            }
        }
        if(n == 1){
            cout<<1<<' '<<1<<endl;
            continue;
        }
        cout<<mi+1<<' '<<m+1<<endl;
    }
}
