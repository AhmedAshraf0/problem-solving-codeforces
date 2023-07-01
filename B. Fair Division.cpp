/*
CST
17-Nov-22
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
        int n , sum = 0 , test , op = 0;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ; ++i){
            cin>>arr[i];
            sum += arr[i];
        }
        for(int i = 0 ; i  < n ; ++i){
            test = 0;
            test += arr[i];
            if(sum - test == test){
                op = 1;
                break;
            }
            for(int j = i + 1 ; j < n; ++j){
                test += arr[j];
                if(sum - test == test){
                    op = 1;
                    test = INT_MAX;
                    i = n;
                }
            }
        }
        if(op)
            cout<<"yes";
        else
            cout<<"no";
        cout<<'\n';
    }
}
