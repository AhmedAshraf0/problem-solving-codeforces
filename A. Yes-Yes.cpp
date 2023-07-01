/*
CST
18-Nov-22
*/
#include<bits/stdc++.h>

using namespace std;
bool cmp(char,char);
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        bool ans = false;
        int si;
        string str;
        cin>>str;
        si = str.size();
        if(si == 1){
            if(str[0] == 'Y' || str[0] == 'e' || str[0] == 's')
                ans = true;
        }else if(si == 2){
            ans = cmp(str[0],str[1]);
        }else{
            for(int i = 0 ; i < si-1 ; ++i)
                if(cmp(str[i],str[i+1])){
                    ans = true;
                }else{
                    ans = false;
                    i = si;
                }
        }
        if(ans)
            cout<<"yes";
        else
            cout<<"no";
        cout<<'\n';
    }
}

bool cmp(char c1,char c2){
    if((c1 == 'Y' && c2 == 'e') || (c1 == 'e' && c2 == 's') || (c1 == 's' && c2 == 'Y'))
        return true;
    return false;
}