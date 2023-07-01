/*
CST
11-Oct-22
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
    vector<int> v1(n*2);
    for(int i = 0 ; i < n ; ++i)
        cin>>v1[i];
    for(int i = n ; i < n*2 ; ++i)
        v1[i] = v1[i-n];

    for(int i = 1 ; i < n*2 ; ++i){
        if(v1[i] != 0){
            v1[i] += v1[i-1];
        }
    }
    cout<<*max_element(v1.begin(),v1.end());
}
