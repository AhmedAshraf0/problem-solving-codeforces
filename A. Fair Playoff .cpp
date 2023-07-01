/*
CST
26-Jul-22
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
        int arr[4] , mi2 = INT_MIN;
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
        int mi = *max_element(arr,arr+4);
        for(int i = 0 ; i < 4 ; ++i)
            if((arr[i] > mi2 )&& (arr[i] < mi))
                mi2 = arr[i];
        if(arr[0] > arr[1]){
            int f1 = arr[0];
            if(arr[2] > arr[3]){
                if((arr[2] == mi || arr[2] == mi2) && (f1 == mi || f1 == mi2)){
                    cout<<"YES\n";
                    continue;
                }
            }else{
                if((arr[3] == mi || arr[3] == mi2) && (f1 == mi || f1 == mi2)){
                    cout<<"YES\n";
                    continue;
                }
            }
        }else{
            int f1 = arr[1];
            if(arr[2] > arr[3]){
                if((arr[2] == mi || arr[2] == mi2) && (f1 == mi || f1 == mi2)){
                    cout<<"YES\n";
                    continue;
                }
            }else{
                if((arr[3] == mi || arr[3] == mi2) && (f1 == mi || f1 == mi2)){
                    cout<<"YES\n";
                    continue;
                }
            }
        }
        cout<<"NO\n";
    }
}
