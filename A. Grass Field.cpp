/*
CST
09-Jul-22
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
        int arr[2][2] , ctr = 0;
        cin>>arr[0][0]>>arr[0][1]>>arr[1][0]>>arr[1][1];
        for(int i = 0 ; i < 2 ;  ++i)
            for(int j = 0 ; j < 2 ; ++j)
                if(arr[i][j])
                    ctr++;
        if(!ctr)
            cout<<0;
        else if(ctr == 1 || ctr == 3 || ctr == 2)
            cout<<1;
        else if(ctr == 4)
            cout<<2;
        cout<<'\n';
    }
}
