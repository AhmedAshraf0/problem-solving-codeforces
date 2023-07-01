//
// Created by CST on 13-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < n - 1 ; ++j){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
        if(i != n - 1){
            for(int k = 0 ; k < n ; ++k)
                cout<<arr[k]<<" ";
            cout<<endl;
        }
    }
}
