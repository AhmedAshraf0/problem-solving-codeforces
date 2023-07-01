//
// Created by CST on 24-Mar-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , smallest;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    sort(arr,arr+n);
    smallest = arr[0];
    for(int i = 1 ; i < n ; ++i){
        if(smallest != arr[i]){
            cout<<arr[i];
            return 0;
        }
    }
    cout<<"NO";
}
