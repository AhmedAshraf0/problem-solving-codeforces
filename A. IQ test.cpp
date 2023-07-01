//
// Created by CST on 12-Feb-22.
//
#include<iostream>
using namespace std;
int main(){
    int n , evenctr = 0 , oddctr = 0;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; ++i){
        cin>>arr[i];
        if(arr[i] % 2 == 0){
            evenctr++;
        }else{
            oddctr++;
        }
    }
    if(oddctr > evenctr){
        for(int i = 0 ; i < n ; ++i){
            if(arr[i] % 2 == 0){
                cout<<i+1;
                return 0;
            }
        }
    }else{
        for(int i = 0 ; i < n ; ++i){
            if(arr[i] % 2 != 0){
                cout<<i+1;
                return 0;
            }
        }
    }
}
