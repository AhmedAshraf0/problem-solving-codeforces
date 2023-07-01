/*
CST
07-Nov-22
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
        int n , ctra0 = 0 , ctra1 = 0 , ctrb1 = 0 , ctrb0 = 0 , ctr = 0;
        cin>>n;
        int arr1[n] , arr2[n];
        for(int i = 0 ; i < n ; ++i){
            cin>>arr1[i];
            if(arr1[i])
                ctra1++;
            else
                ctra0++;
        }
        for(int i = 0 ; i < n ; ++i){
            cin>>arr2[i];
            if(arr2[i])
                ctrb1++;
            else
                ctrb0++;
        }
        for(int i = 0 ; i < n ; ++i)
            if(arr1[i] != arr2[i])
                ctr++;

        if(ctrb0 > ctra0){
            if(ctrb0-ctra0 != ctr)
                cout<<1+(ctrb0-ctra0);
            else
                cout<<1;
        }
        else if(ctrb1 > ctra1){
            if(ctrb1-ctra1 != ctr)
                cout<<1+(ctrb1-ctra1);
            else
                cout<<1;
        }else if(ctr > 0)
            cout<<1;
        else
            cout<<0;
        cout<<'\n';
    }
}
