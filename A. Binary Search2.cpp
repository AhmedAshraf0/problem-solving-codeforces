/*
CST
09-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , q;
    cin>>n>>q;
    vector<pair<int,int>>v1(n);
    for(int i = 0 ; i < n ; ++i)
        cin>>v1[i].first>>v1[i].second;
    while(q--){
        string str;
        cin>>str;
        if(str == "lower"){
            int l , r;
            cin>>l>>r;
            auto it = lower_bound(v1.begin(),v1.end(), make_pair(l,r));
            if(it != v1.end()){
                if(v1[it-v1.begin()] == make_pair(l,r)){
                    if(it-v1.begin() == 0)
                        cout<<-1;
                    else
                        cout<<it-v1.begin()-1;
                }else{//bigger than me
                    cout<<it-v1.begin()-1;
                }
            }else{
                if(v1[n-1] < make_pair(l,r))
                    cout<<n-1;
                else
                    cout<<-1;
            }
        }else if(str == "upper"){
            int l , r;
            cin>>l>>r;
            auto it = upper_bound(v1.begin(),v1.end(), make_pair(l,r));
            if(it != v1.end()){
                cout<<it-v1.begin();
            }else
                cout<<-1;
        }else if(str == "find"){
            int l , r;
            cin>>l>>r;
            if(binary_search(v1.begin(),v1.end(), make_pair(l,r))){
                cout<<"found";
            }else
                cout<<"not found";
        }
        cout<<'\n';
    }
}
