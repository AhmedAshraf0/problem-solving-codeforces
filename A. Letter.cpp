/*
CST
06-Jul-22
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int row , col , mi = INT_MAX, ma = INT_MIN , s = INT_MAX , e  = INT_MIN;
    cin>>row>>col;
    vector<string>v1(row);
    for(int i = 0 ; i < row ; ++i)
        cin>>v1[i];
    for(int i = 0 ; i < row ; ++i)
        for(int j = 0 ; j < col ; ++j)
            if(v1[i][j] == '*'){
                if(i < s)
                    s = i;
                if(i > e)
                    e = i;
                if(j > ma)
                    ma = j;
                if(j < mi)
                    mi = j;
            }
    for(int i = s ; i <= e ; ++i){
        for(int j = mi ; j <= ma ; ++j){
            cout<<v1[i][j];
        }
        cout<<'\n';
    }
}
