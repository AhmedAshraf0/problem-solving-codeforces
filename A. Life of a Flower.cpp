/*
CST
07-Oct-22
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
        bool conOne  = false, conZero = false , died = false;
        int n , h = 1;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ; ++i)
            cin>>arr[i];
        for(int i = 0 ; i < n ; ++i){
            if(arr[i] == 1 && !conOne){
                h++;
                conZero = false;
                conOne = true;
            }else if(arr[i] == 1 && conOne){
                h += 5;
                conOne = true;
                conZero = false;
            }else if(arr[i] == 0 && conZero){
                cout<<-1<<'\n';
                died = true;
                break;
            }else{
                conZero = true;
                conOne = false;
            }
        }
        if(!died){
            cout<<h<<'\n';
        }
    }
}
