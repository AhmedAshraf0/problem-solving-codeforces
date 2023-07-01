/*
CST
27-Aug-22
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
        int arr[26] = {0};
        for(int i = 0 ; i < 2 ; ++i){
            string str;
            cin>>str;
            arr[str[0]-97]++;
            arr[str[1]-97]++;
        }
        sort(arr,arr+26);
        if(arr[25] == 4)
            cout<<0;
        else if(arr[25] == 3)
            cout<<1;
        else if(arr[25] == 2 && arr[24] == 2)
            cout<<1;
        else if(arr[25] == 2)
            cout<<2;
        else
            cout<<3;
        cout<<'\n';
    }
}
