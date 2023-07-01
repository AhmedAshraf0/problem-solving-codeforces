
/*
CST
03-Sep-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long n;
    cin>>n;
    map<string, long long>m1;
    pair<string, long long>p1;
    for(long long i = 0 ; i < n ; ++i){
        string str;long long num;
        cin>>str>>num;
        if(!i)
            p1 = make_pair(str,num);
        m1[str] += num;
        if(p1.second < m1[str]){
            p1.first = str;
            p1.second = m1[str];
        }

    }
    cout<<p1.first;
}
