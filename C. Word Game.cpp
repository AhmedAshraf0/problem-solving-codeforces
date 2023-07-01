/*
CST
08-Sep-22
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
        int n;
        cin>>n;
        string arr[3][n];
        int arr2[3] = {0,0,0};
        map<string,int>map1;
        for(int i = 0 ; i < 3 ; ++i)
            for(int j = 0 ; j < n ; ++j)
                cin>>arr[i][j];
        for(int i = 0 ; i < 3 ; ++i)
            for(int j = 0 ; j < n ; ++j)
                map1[arr[i][j]]++;
        for(int i = 0 ; i < 3 ; ++i){
            for(int j = 0 ; j < n ; ++j){
                if(map1[arr[i][j]] == 1)
                    arr2[i] += 3;
                else if(map1[arr[i][j]] == 2)
                    arr2[i]++;
            }
        }
        cout<<arr2[0]<<' '<<arr2[1]<<' '<<arr2[2]<<'\n';
    }
}
