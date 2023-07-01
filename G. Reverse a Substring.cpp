/*
CST
15-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;
int frqarr[26];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    string str;
    cin>>n>>str;
    for(int i = 0 ; i < n ; ++i)
        frqarr[str[i]-97]++;
    for(int i = 0 ; i < n ; ++i){
        frqarr[str[i]-97]--;
        if(str[i] == 'a')
            continue;
        else{
            for(int j = 0 ; j < str[i]-97 ; ++j){
                if(frqarr[j]){
                    cout<<"YES\n"<<i+1<<' '<<1+(find(str.begin()+i+1,str.end(),char(j+97))-str.begin());
                    return 0;
                }
            }
        }
    }
    cout<<"NO\n";
}
