/*
CST
16-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    int arr[n] , arr2[n];
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    int currenH = arr[n-1];
    for(int i = n-1 ; i >= 0 ; --i){
        if(i == n-1){
            arr2[i] = 0;
            continue;
        }
        if(arr[i] == currenH){
            arr2[i] = 1;
        }else if(arr[i] < currenH){
            arr2[i] = (currenH -arr[i])+1;
        }else{
            arr2[i] = 0;
            currenH = arr[i];
        }
    }
    for(int i = 0 ; i < n ; ++i)
        cout<<arr2[i]<<' ';
}
