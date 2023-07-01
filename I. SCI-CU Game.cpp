/*
CST
08-Jul-22
*/
#include<bits/stdc++.h>
using namespace std;
int calc(vector<int>v , int s, int num){
    int n3 = 0;
    for(int i = 0 ; i < s ; ++i){
        if(v[i] == 1 && i == 0){
            n3 += 1;
            continue;
        }
        n3 += (pow(num,i)*v[i]);
    }
    return n3;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;cin>>t;
    while(t--){
        int n , n2 , n3;cin>>n;n2 = n;
        vector<int>v;
        while(n > 0){
            if(!(n % 3))
                v.push_back(0);
            else
                v.push_back(1);
            n /= 3;
        }
        n3 = calc(v,v.size(),3);
        if(n3 != n2){
            cout<<-1<<'\n';
            continue;
        }
        cout<<calc(v,v.size(),2)<<'\n';
    }
}
