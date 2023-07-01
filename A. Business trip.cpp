/*
CST
31-Jul-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int n , arr[13];arr[0] = 0;
    cin>>n;
    for(int i = 1 ; i <= 12 ; ++i)
        cin>>arr[i];
    sort(arr,arr+13);
    if(!n)
        cout<<0;
    else{
        if((*(lower_bound(arr,arr+13,n)-arr) == n) || (arr[12] >= n)){
            cout<<1;
            return 0;
        }
        for(int i = 11 ; i >= 1 ; --i){
            arr[i] += arr[i+1];
            if(arr[i] >= n){
                cout<<(12-i)+1;
                return 0;
            }
        }
        cout<<-1;
    }
}
