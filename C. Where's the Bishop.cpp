/*
CST
25-Jul-22
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
        char arr[8][8];
        int arr2[8];
        for(int r = 0 ; r < 8 ; ++r){
            arr2[r] = 0;
            for(int co = 0 ; co < 8 ; ++co){
                cin>>arr[r][co];
                if(arr[r][co] == '#')
                    arr2[r]++;
            }
        }
        for(int i = 0 ; i < 8 ; ++i){
            if(arr2[i] == 1){
                if(i > 0 && i != 7){
                    if(arr2[i-1] == 2 && arr2[i+1] == 2){
                        for(int col = 0 ; col < 8 ; ++col){
                            if(arr[i][col] == '#'){
                                cout<<i+1<<' '<<col+1<<'\n';
                                goto con;
                            }
                        }
                    }
                }
            }
        }
        con:
        continue;
    }
}
