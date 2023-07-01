/*
CST
27-Oct-22
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
        int n , octr = 0 , ectr = 0;
        cin>>n;
        while(n--){
            int num;
            cin>>num;
            if(num%2)
                octr++;
            else
                ectr++;
        }
        if(octr<=ectr)
            cout<<octr;
        else
            cout<<ectr;
        cout<<'\n';
    }
}
