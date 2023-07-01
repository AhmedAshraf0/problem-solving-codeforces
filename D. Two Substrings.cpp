/*
CST
16-Aug-22
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string str;
    bool ab  = false, ba = false;
    int abab = 0;
    cin>>str;
    int s = str.size();
    for(int i = 0 ; i < s ; ++i){
        if(i <= str.size()-3 && (str.substr(i,3) == "ABA" || str.substr(i,3) == "BAB")){
            i += 2;
            abab += 1;
        }else if(i < str.size()-1 && str.substr(i,2) == "AB")
            ab = true;
        else if(i < str.size()-1 && str.substr(i,2) == "BA")
            ba = true;
        if((ab && ba) || (abab && ab) || (abab && ba) || abab > 1){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
