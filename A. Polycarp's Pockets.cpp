//
// Created by CST on 02-Mar-22.
//
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n] , ctr = 1;
    for(int i = 0 ; i < n ; ++i){
        cin>>arr[i];
    }
    for(int i = 0 ; i < n - 1 ; ++i){
        int temp = 1;
        for(int j = i+1 ; j < n ; ++j){
            if(arr[i] == arr[j])
                temp++;
        }
        if(temp > ctr)
            ctr = temp;
    }
    cout<<ctr;
}
