/*
CST
29-Nov-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , m;
    cin>>n>>m;
    int arr[m];
    for(int i = 0 ; i < m ; ++i)
        cin>>arr[i];//1 2 3 4 5
    sort(arr,arr+m);
    if(arr[0] == 1 || arr[m-1] == n){
        cout<<"NO";
    }else{
        for(int i = 0 ; i < m-1 ; ++i){
            if(i < m-1 && arr[i+1] - arr[i] == 1 && arr[i+2] - arr[i+1] == 1){
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
    }

}
