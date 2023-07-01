//
// Created by CST on 26-Mar(JUN)-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cin>>n>>m;
    vector<string>v1(n);
    for(int i = 0 ; i < n ; ++i)
        cin>>v1[i];
    if(m > 1){
        for(int i = 0 ; i < n ; ++i){//make sure every row is the same number
            sort(v1[i].begin() , v1[i].end());
            if((v1[i][0] != v1[i][1]) || (v1[i][m-1] != v1[i][m-2])){
                cout<<"NO";
                return 0;
            }
        }
    }
    for(int i = 0 ; i < n - 1 ; ++i){
        if(v1[i][0] == v1[i+1][1]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
