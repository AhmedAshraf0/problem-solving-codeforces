//
// Created by CST on 16-Feb-22.
//
#include<iostream>
using namespace std;
int main(){
    int t , ctr = 0;
    cin>>t;
    while(t--){
        int arr[2];
        cin>>arr[0]>>arr[1];
        if(arr[0] > arr[1])
            ctr++;
        else if(arr[1] > arr[0])
            ctr--;
    }
    if(ctr > 0){
        cout<<"Mishka";
    }else if(ctr < 0){
        cout<<"Chris";
    }else{
        cout<<"Friendship is magic!^^";
    }
}
