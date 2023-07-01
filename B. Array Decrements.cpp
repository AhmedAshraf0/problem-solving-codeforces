/*
CST
07-Aug-22
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
        bool check = false , check2 = false , all = true;
        cin>>n;
        int a[n],b[n] , n2 = n*2 , difference = INT_MIN;
        for(int i = 0 ; i < n2 ; ++i){
            if(i < n){
                cin>>a[i];
            }else{
                cin>>b[i-n];
                if(b[i-n] > a[i-n]){
                    all = false;
                    check = true;
                }else if(b[i-n] == a[i-n] && all){
                    all = true;
                }else if(b[i-n] < a[i-n]){
                    all = false;
                    if(a[i-n]-b[i-n] > difference)
                        difference = a[i-n]-b[i-n];
                }
            }
        }
        if(all){
            cout<<"yes\n";
            continue;
        }
        if(check){
            cout<<"no\n";
            continue;
        }
        for(int i = 0 ; i < n ; ++i){
            a[i] -= difference;
            if(a[i] < 0)
                a[i] = 0;
            if(a[i] != b[i]){
                check2 = true;
                break;
            }
        }
        if(check2)
            cout<<"no";
        else
            cout<<"yes";
        cout<<'\n';
    }
}
