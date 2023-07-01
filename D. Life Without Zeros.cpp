/*
CST
09-Sep-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long a , b ,sum;
    cin>>a>>b;
    sum = a+b;
    string aa = to_string(a), bb  = to_string(b), summ = to_string(sum);
    aa.erase(remove(aa.begin(),aa.end(),'0'),aa.end());
    bb.erase(remove(bb.begin(),bb.end(),'0'),bb.end());
    summ.erase(remove(summ.begin(),summ.end(),'0'),summ.end());
    if(stoi(aa)+ stoi(bb) == stoi(summ))
        cout<<"YES";
    else
        cout<<"NO";
}
