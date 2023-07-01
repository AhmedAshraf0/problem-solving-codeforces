/*
CST
05-Jul-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , m , num , last;
    long long total = 0;
    vector<int>v;
    cin>>n>>m>>num;
    v.push_back(num);
    last = 0;
    for(int i = 1 ; i < m ; ++i) {
        cin>>num;
        if (num != v[last]) {
            v.push_back(num);
            last++;
        }
    }
    int current = 1, target;
    for(int i = 0 ; i < v.size() ; ++i){
        target = v[i];
        if(target > current)
            total += (target - current);
        else if(target < current)
            total += (n - abs(target - current));
        current = target;
    }
    cout<<total;
}
