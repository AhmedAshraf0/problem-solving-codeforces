//
// Created by CST on 12-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n] , max = -999999999, min = 999999999;
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    for(int i = 0 ; i < n-1 ; ++i){
        for(int j = i+1 ; j < n ; ++j){
            if(arr[i] <= arr[j])
                if(j - i > value)
                    value = j - i;
        }
    }
    cout<<value;
}
