//
// Created by CST on 02-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n , m;
    cin>>n>>m;
    long long s = n + m;
    vector<int>v1(n),v2(m),v3(n+m);
    for(long long i = 0 ; i < s ; ++i)
        if(i < n)
            cin>>v1[i];
        else
            cin>>v2[i-n];
    vector<int>::iterator it1 = v1.begin() , it2 = v2.begin() , it3 = v3.begin();
    while(it1 != v1.end() || it2 != v2.end()){
        if(it2 == v2.end() || it1 != v1.end() && *it1 < *it2){
            *it3 = *it1;
            it3++;it1++;
        }else{
            *it3 = *it2;
            it3++;it2++;
        }
    }
    for (const auto &item: v3)
        cout<<item<<' ';
}
