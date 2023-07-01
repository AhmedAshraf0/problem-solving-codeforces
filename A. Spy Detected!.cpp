//
// Created by CST on 15-Feb-22.
//
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ; ++i)
            cin>>arr[i];
        if(arr[0] == arr[1]){
            for(int i = 2 ; i < n ; ++i){
                if(arr[i] != arr[1]){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }else if(arr[2] == arr[0]){
            cout<<2<<endl;
        }else if(arr[2] == arr[1]){
            cout<<1<<endl;
        }
    }
}
