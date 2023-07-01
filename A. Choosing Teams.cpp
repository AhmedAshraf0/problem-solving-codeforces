//
// Created by CST on 02-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k , ctr = 0;
    cin>>n>>k;
    int arr[n];
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    //we will see how many people could join then divide by 3
    for(int i = 0 ; i < n ; ++i){
        if((5 - arr[i]) >= k)
            ctr++;
    }
    cout<<ctr/3;
}
