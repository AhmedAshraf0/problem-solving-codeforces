/*
CST
09-Oct-22
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
    cin>>n;
    vector<int> v1(n);
    for(int i = 0 ; i < n ; ++i)
        cin>>v1[i];
    int m;
    cin>>m;
    vector<int> v2(m);
    for(int i = 0 ; i < m ; ++i)
        cin>>v2[i];
    if(n >= m){
        for(int i = 0 ; i < n ; ++i){
            for(int j = 0 ; j < m ; ++j){
                if(find(v1.begin(),v1.end(),v1[i]+v2[j]) == v1.end()){
                    if(find(v2.begin(),v2.end(),v1[i]+v2[j]) == v2.end()){
                        cout<<v1[i]<<' '<<v2[j];
                        return 0;
                    }
                }
            }
        }
    }else{
        for(int i = 0 ; i < m ; ++i){
            for(int j = 0 ; j < n ; ++j){
                if(find(v2.begin(),v2.end(),v2[i]+v1[j]) == v2.end()){
                    if(find(v1.begin(),v1.end(),v2[i]+v1[j]) == v1.end()){
                        cout<<v1[j]<<' '<<v2[i];
                        return 0;
                    }
                }
            }
        }
    }
}
