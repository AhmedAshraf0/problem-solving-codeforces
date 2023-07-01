/*
CST
01-Oct-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int freq[] = {0,0};
    int t;
    cin>>t;
    while(t--){
        int n;string str;
        cin>>n>>str;
        for(int i = 0 ; i < str.size() ; ++i)
            freq[str[i]-97]++;
        if(!freq[0] || !freq[1]){
            cout<<-1<<' '<<-1<<'\n';
            continue;
        }
        for(int i = 0 ; i < str.size() ; ++i){
            int ctra = 0 , ctrb = 0;
            if(str[i] == 'a')
                ctra++;
            else
                ctrb++;
            for(int j = i+1 ; j < str.size() ; ++j){
                if(str[j] == 'a')
                    ctra++;
                else
                    ctrb++;
                if(ctra == ctrb){
                    cout<<i+1<<' '<<j+1<<'\n';
                    goto here;
                }
            }
        }
        cout<<-1<<' '<<-1<<'\n';
        here:
        continue;
    }
}
