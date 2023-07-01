/*
CST
25-Nov-22
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
        int n , d;
        cin>>n>>d;
        vector<int>v2;
        for(int i = 0 ;i < n ; ++i){
            int va;
            cin>>va;
            v2.push_back(va);
        }
        vector<bool>v(51,false);
        for(int i = 0 ;i < n ; ++i){
            v[v2[i]] = true;
        }
        int i = 1 ;
        for(; i <= n ; ++i)
            if(!v[i]){
                d-=i;
                v2.push_back(i);
            }
        while(d > 0){
            if(i < 51){
                if(!v[i]){
                        d-=i;
                        v2.push_back(i);
                }
            }else{
                d-=i;
                v2.push_back(i);
            }
            i++;
        }
        sort(v2.begin(),v2.end());
        if(d == 0 && v2.size() == v2[v2.size()-1])
            cout<<"YES";
        else
            cout<<"NO";
        cout<<'\n';
    }
}
