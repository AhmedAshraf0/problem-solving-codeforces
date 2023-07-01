//
// Created by CST on 24-Mar-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , ctr = 0 , ptr1 = 1 , ptr2 = 1;
        cin>>n;
        int arr[n+1];
        arr[0] = 0;
        for(int i = 1 ; i <= n ; ++i)
            cin>>arr[i];
        for(int i = 2 ; i <= n ; ++i){
            if(!arr[i]){
                ptr2 = i;
            }else if(arr[i] && !arr[ptr2]){ // 1 && 1
                ptr2 = i;//is moving with 0
                ctr += ptr2 - ptr1;
                ptr1 = i;
            }else if(arr[i])
                ptr1 = i;
        }
        cout<<ctr<<endl;
    }
}
