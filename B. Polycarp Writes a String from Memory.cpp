/*
CST
12-Jul-22
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
        string str;
        int d = 0 , s;
        set<char>s1;
        cin>>str;
        s = str.size();
        for(int i = 0 ; i < s ; ){
            s1.insert(str[i]);
            if(s1.size() == 4){
                d++;
                s1.clear();
                continue;
            }else{
                if(i == s-1)
                    if(s1.size() != 0)
                        d++;
                ++i;
            }
        }
        cout<<d<<'\n';
    }
}
