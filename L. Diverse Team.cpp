/*
CST
02-Jul-22
*/
#include<bits/stdc++.h>

using namespace std;
const int x = 101;
int arr2[x];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n , k , ctr = 0;
    cin>>n>>k;
    pair<int,int> arr[n];
    for(int i = 0 ; i < n  ;++i)
        arr[i].second = -1;
    for(int i = 0 ; i < n ; ++i){
        cin>>arr[i].first;
        if(arr2[arr[i].first] != 1){
            arr2[arr[i].first]++;
            arr[i].second = i;
            ctr++;
        }
    }
    if(ctr >= k){
        int ctr2 = 0;
        cout<<"YES\n";
        for(int i = 0 ; i < n ; ++i){
            if(arr[i].second != -1){
                cout<<arr[i].second+1<<' ';
                ctr2++;
                if(ctr2 == k)
                    break;
            }
        }
    }else{
        cout<<"NO";
    }

}
