/*
CST
02-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    string str;
    cin>>n>>str;
    if(find(str.begin(),str.end(),'L') != str.end() && find(str.begin(),str.end(),'R') != str.end()){
        cout<<(find(str.begin(),str.end(),'R')-str.begin())+1<<' '<<(find(str.begin(),str.end(),'L')-str.begin());
    }else if(find(str.begin(),str.end(),'R') != str.end()){
        cout<<(find(str.begin(),str.end(),'R')-str.begin())+1<<' '<<str.rfind('R')+2;
    }else if(find(str.begin(),str.end(),'L') != str.end()){
        cout<<str.rfind('L')+1<<' '<<(find(str.begin(),str.end(),'L')-str.begin());
    }
}
