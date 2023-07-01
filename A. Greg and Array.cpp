//
// Created by CST on 03-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
long long arr2[100000+2];//n+2 to skip out of bound error
const int x = 10e5 + 2;
int preArr[x];
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n , m , k;
    cin>>n>>m>>k;
    int arr[n+1];
    long long arr3[m+1][3];
    arr[0] = 0;
    arr3[0][0] = 0;
    arr3[0][1] = 0;
    arr3[0][2] = 0;
    for(int i = 1 ; i <= n ; ++i)
        cin>>arr[i];
    for(int i = 1 ; i <= m ; ++i){
        int l , r , d;
        cin>>l>>r>>d;
        arr3[i][0] = l;
        arr3[i][1] = r;
        arr3[i][2] = d;
    }
    int maxIdx = 0;
    while(k--){
        int l , r;
        cin>>l>>r;
        if(max(l,r) > maxIdx)
            maxIdx = max(l,r);
        preArr[l]++;
        preArr[r+1]--;
    }
    for(int i = 1 ; i <= x ; ++i)
        preArr[i] += preArr[i-1];

    for(int i = 1 ; i <= maxIdx ; ++i){
        if(preArr[i] > 0){
            arr2[arr3[i][0]] += arr3[i][2]*preArr[i];
            arr2[arr3[i][1]+1] -= arr3[i][2]*preArr[i];
        }
    }
    for(int i = 1 ; i <= n+1 ; ++i)
        arr2[i] += arr2[i-1];
    for(int i = 1 ; i <= n ; ++i)
        cout<<arr[i]+arr2[i]<<' ';
}