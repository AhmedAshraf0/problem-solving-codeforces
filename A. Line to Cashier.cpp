/*
CST
04-Dec-22
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
    int arr[n] , res = INT_MAX;
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    for(int i = 0 ;i  < n ; ++i){
        int temp = arr[i]*15 , val;
        for(int j = arr[i] ; j > 0 ; --j){
            cin>>val;
            temp += val*5;
        }
        res = min(res,temp);
    }
    cout<<res;
}
