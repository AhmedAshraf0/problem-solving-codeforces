//
// Created by CST on 19-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    int mctr = 1 , ctr = 1;
    for(int i = 1 ; i < n ; ++i){
        if(arr[i] > arr[i-1]){
            ctr++;
        }else{
            if(mctr < ctr)
                mctr = ctr;
            ctr = 1;
        }
    }
    if(mctr < ctr)
        mctr = ctr;
    cout<<mctr;
}
