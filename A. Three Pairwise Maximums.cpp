/*
CST
19-Jul-22
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
        int arr[3];
        multiset<int> s;
        cin>>arr[0]>>arr[1]>>arr[2];
        s.insert(arr[0]);
        s.insert(arr[1]);
        s.insert(arr[2]);
        if(s.count(arr[0]) == 1 && s.count(arr[1]) == 1 &&s.count(arr[2]) == 1){
            cout<<"NO";
            goto con;
        }else{
            for(int i = 0 ; i < 3 ;  ++i){
                if(s.count(arr[i]) == 3){
                    cout<<"YES"<<'\n';
                    cout<<arr[i]<<' '<<arr[i]<<' '<<arr[i];
                    goto con;
                }
            }
            for(int i = 0 ; i < 3 ;  ++i){//2
                if(s.count(arr[i]) == 2 && arr[i] == *max_element(arr,arr+3)){
                    cout<<"YES"<<'\n';
                    cout<<arr[i]<<' ';
                    for(int j = 0 ; j < 3 ; ++j){
                        if(arr[j] != arr[i]){
                            cout<<arr[j]<<' '<<arr[j];
                            goto con;
                        }
                    }
                }
            }
        }
        cout<<"NO";
        con:
        cout<<'\n';
    }
}
