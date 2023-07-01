//
// Created by CST on 26-Mar-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n] , arr2[] = {0,0,0} , m = 0;
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    for(int i = 0 ; i < n ; ++i){
        arr2[--arr[i]]++;
    }
    for(int i = 1 ; i < 3 ; ++i){
        if(arr2[i] >= arr2[m])
            m = i;
    }
    n = 0;
    for(int i = 0 ; i < 3 ; ++i){
        if(m != i)
            n += arr2[i];
    }
    cout<<n;
}
