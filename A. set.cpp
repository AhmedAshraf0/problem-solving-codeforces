/*
CST
03-Jul-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    set<int>s;
    int q;
    cin>>q;
    while(q--){
        int x;
        string str;
        cin>>str>>x;
        if(str == "insert"){
            s.emplace(x);
        }else if(str == "find"){
            if(s.find(x) != s.end())
                cout<<"found\n";
            else
                cout<<"not found\n";
        }else if(str == "lower_bound"){
            auto val = s.lower_bound(x);
            if(val != s.end())
                cout<<*val;
            else
                cout<<-1;
            cout<<'\n';
        }else if(str == "upper_bound"){
            auto val = s.upper_bound(x);
            if(val != s.end())
                cout<<*val;
            else
                cout<<-1;
            cout<<'\n';
        }
    }
}
