/*
CST
02-Jul-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n , q;
    cin>>n>>q;
    int arr[n];
    for (auto &item: arr)
        cin>>item;
    int s = *max_element(arr,arr+n);
    int pre[s+1];
    for(int i = 0 ; i <= s ; ++i)
        pre[i] = 0;
    for(int i = 0 ; i < n ; ++i)
        if(pre[arr[i]] == 0)
            pre[arr[i]]++;
    for(int i = 1 ; i <= s ; ++i)
        pre[i] += pre[i-1];
    while(q--){
        int num;
        cin>>num;
        if(num > s)
            cout<<pre[s]<<' '<<0;
        else if(num == s){
            cout<<pre[s-1]<<' '<<0;
        }else{
            cout<<pre[num-1]<<' '<<pre[s]-pre[num];
        }
        cout<<'\n';
    }
}
