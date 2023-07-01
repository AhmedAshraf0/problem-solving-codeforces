//
// Created by CST on 28-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , ctr = 1 , temp = 1;
    cin>>n;
    if(n == 1){
        cout<<1;
        return 0;
    }
    int arr[n];
    for(int i = 0 ; i < n ; ++i){
        cin>>arr[i];
    }
    for(int i = 0 ; i < n-1 ; ++i){
        if(arr[i+1] >= arr[i]){
            temp++;
            if(temp > ctr)
                ctr = temp;
        }else{
            temp = 1 ;
        }
    }
    cout<<ctr;

}
