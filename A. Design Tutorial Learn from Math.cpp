/*
CST
16-Nov-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<int>v(1000001,1);
    v[0] = v[1] = 0;
    for(int i = 2 ; i*i < v.size()  ; ++i){
        if(v[i]){
            for(int j = i*i ; j < v.size() ; j+=i)
                v[j]=0;
        }
    }
    int n;
    cin>>n;
    int i = n - 1;
    while(true){
        if(!v[i] && !v[n-i] && n-i>1){
            cout<<i<<' '<<n-i;
            break;
        }
        i--;
    }
}
// 1 1 2 2 2