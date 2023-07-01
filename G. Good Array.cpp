/*
CST
17-Aug-22
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
    long long sum = 0;
    map<int,int>m1;
    vector<int>res;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; ++i){
        cin>>arr[i];
        sum += arr[i];
        m1[arr[i]]++;
    }
    for(int i = 0 ; i < n ; ++i){
        m1[arr[i]]--;
        sum -= arr[i];
        auto it = m1.end();
        --it;
        if(it->second != 0){
            if(sum - it->first == it->first){
                res.push_back(i);
            }
            m1[arr[i]]++;
            sum += arr[i];
        }else{
            --it;
            if(sum - it->first == it->first){
                res.push_back(i);
            }
            m1[arr[i]]++;
            sum += arr[i];
            ++it;
        }
    }
    cout<<res.size()<<'\n';
    for(int i = 0 ; i < res.size() ; ++i)
        cout<<res[i]+1<<' ';
}
