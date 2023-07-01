//
// Created by CST on 28-May-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int row , col , q;
    cin>>row>>col>>q;
    int arr[row+1][col+1];
    long long arr2[row+1][col+1];
    for(int i = 0 ; i < 1 ; ++i)
        for(int j = 0 ; j <= col ; ++j){
            arr[i][j] = 0;
            arr2[i][j] = 0;
        }
    for(int j = 0 ; j < 1 ; ++j)
        for(int i = 0 ; i <= row ; ++i){
            arr[i][j] = 0;
            arr2[i][j] = 0;
        }
    for(int i = 1 ; i <= row ; ++i)
        for(int j = 1 ; j <= col ; ++j)
            cin>>arr[i][j];
    for(int i = 1 ; i <= row ; ++i)
        for(int j = 1 ; j <= col ; ++j)
            arr2[i][j] = arr2[i][j-1] + arr[i][j];
    for(int j = 1 ; j <= col ; ++j)
        for(int i = 1 ; i <= row ; ++i)
            arr2[i][j] += arr2[i-1][j];
    while(q--){
        int x1 , y1 , x2 , y2;
        cin>>x1>>y1>>x2>>y2;
        long long sum = arr2[x2][y2] - arr2[x1-1][y2] - arr2[x2][y1-1] + arr2[x1-1][y1-1];
        cout<<sum<<'\n';
    }
}
