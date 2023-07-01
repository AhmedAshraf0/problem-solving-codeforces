/*
CST
03-Sep-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n , m;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ; ++i)
            cin>>arr[i];
        cin>>m;
        int arr2[m];
        for(int i = 0 ; i < m ; ++i)
            cin>>arr2[i];
        int m1 = *max_element(arr,arr+n);
        int m2 = *max_element(arr2,arr2+m);
        if(m1 >= m2)
            cout<<"Alice\n";
        else
            cout<<"Bob\n";
        if(m1 <= m2)
            cout<<"Bob\n";
        else
            cout<<"Alice\n";
    }
}
