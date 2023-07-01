//
// Created by CST on 21-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        bool check = false;
        int n;
        cin>>n;
        int arr[n] , arr2[n];
        for(int i = 0 ; i < n ; ++i) {
            cin >> arr[i];
        }
        for(int i = 0 ; i < n ; ++i){
            arr2[i] = 0;
        }
        for(int i = 0 ; i < n ; ++i){
            arr2[arr[i]-1]++;
        }
        for(int i = 0 ; i < n ; ++i){
            if(arr2[i] >= 3){
                cout<<i+1;
                check = true;
                break;
            }
        }
        if(!check){
            cout<<-1;
        }
        cout<<endl;
    }
}
