//
// Created by CST on 28-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , q;
    cin>>n>>q;
    int arr[n];
    for(int i = 0 ; i <  n ; ++i)
        cin>>arr[i];
    sort(arr,arr+n);
    while(q--){
        string str;
        int x;
        cin>>str>>x;
        if(str == "binary_search"){
            if(binary_search(arr,arr+n,x))
                cout<<"found";
            else
                cout<<"not found";
        }else if(str == "lower_bound"){
            auto val = lower_bound(arr,arr+n,x);
            int idx = val - arr;
            if(idx != n)
                cout<<arr[idx];
            else
                cout<<-1;
        }else if(str == "upper_bound"){
            auto val = upper_bound(arr,arr+n,x);
            int idx = val - arr;
            if(idx != n)
                cout<< arr[idx];
            else
                cout<<-1;
        }
        cout<<'\n';
    }
}