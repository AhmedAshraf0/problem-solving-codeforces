/*
CST
12-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;
int n;
const int mx = 1e5+2;
int arr[mx] , c;
bool can(int distance){
    int currentVal = arr[0] , ctr = 1;
    for(int i = 1 ; i < n ; ++i){
        if(arr[i]-currentVal >= distance){
            currentVal = arr[i];
            ctr++;
        }
    }
    if(ctr >= c)
        return true;
    else
        return false;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin>>n>>c;
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    sort(arr,arr+n);
    int start = 0 , end = 1e9+2;
    while(end-start > 1){
        int mid = start + (end-start)/2;
        if(can(mid)){
            start = mid;
        }else{
            end = mid - 1;
        }
    }
    if(can(end))
        cout<<end;
    else
        cout<<start;
}
