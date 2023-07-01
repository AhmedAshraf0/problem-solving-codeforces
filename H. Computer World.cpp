/*
CST
07-Jul-22
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
    cin>>str;
    if(str.size() > 3){
        cout<<"LARGE";
    }else if(str.size() < 3){
        cout<<"SMALL";
    }else{
        int num = stoi(str);
        if(num <= 200)
            cout<<"SMALL";
        else if(num > 200 && num <= 500)
            cout<<"MEDIUM";
        else if(num > 500)
            cout<<"LARGE";
    }
}
