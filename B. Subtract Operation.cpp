//
// Created by CST on 24-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        bool ans = false;
        int n , k;
        cin>>n>>k;
        vector<int> v(n);
        for(int& x : v)
            cin>>x;
        if(n == 1)
            ans = (v[0] == k);
        else{
            sort(v.begin() , v.end());
            int i = 0 , j = 1;
            while(i < n and j < n){
                if(v[i] + k == v[j]){
                    ans = true;
                    break;
                }else if(v[i] + k < v[j])
                    i++;
                else
                    j++;
            }
        }
        cout<<(ans ? "yes" : "no")<<'\n';

    }
}
