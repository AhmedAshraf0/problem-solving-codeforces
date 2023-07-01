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
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
    int n , q;
    cin>>n>>q;
    map<string,long long>map1;
    while(n--){
        string str;
        int num;
        cin>>str>>num;
        map1.insert(make_pair(str,num));
    }
    while(q--){
        int n2;
        cin>>n2;
        if(n2 == 1){
            string str;
            int num;
            cin>>str>>num;
            map1[str] += num;
        }else if(n2 == 2){
            string str;
            cin>>str;
            cout<<map1[str]<<'\n';
        }
    }
}
