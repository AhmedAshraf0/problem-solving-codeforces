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
    int n , m;
    cin>>n>>m;
    long long s = n + m;
    vector<int>v1(n),v2(m),v3(m);
    for(long long i = 0 ; i < s ; ++i)
        if(i < n)
            cin>>v1[i];
        else
            cin>>v2[i-n];
    vector<int>::iterator it1 = v1.begin() , it2 = v2.begin() , it3 = v3.begin();
    for( ; it2 != v2.end() ; ++it2){
        while(*it1 < *it2){
            if(it1 == v1.end())
                break;
            ++it1;
        }
        *it3 = it1-v1.begin();
        ++it3;
    }
    for (const auto &item: v3)
        cout<<item<<' ';
}
