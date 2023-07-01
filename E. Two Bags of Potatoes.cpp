/*
CST
17-Aug-22
*/
#include<bits/stdc++.h>
using namespace std;
bool print(int y , int n , int k , int yy){
    bool flag = false;
    if(k == 1){
        for(int i = 1; i+yy <= n ; ++i){
            cout<<i<<' ';
            flag = true;
        }
        return  flag;
    }
    for(int i = y ; i+yy <= n ; i += k){
        cout<<i<<' ';
        flag = true;
    }
    return flag;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int y , k , n;
    cin>>y>>k>>n;
    if(y >= n){
        cout<<-1;
        return 0;
    }
    if(!(y % k)){
        if(print(k , n , k,y))
            return 0;
        else
            cout<<-1;

    }else{
        if(y < k){
//            double res = abs(((double)y/k)-1);
            if(print(k-y,n,k,y))
                return 0;
            else
                cout<<-1;
        }else{
            if(print(k - (y % k),n,k,y))
                return 0;
            else
                cout<<-1;
        }
    }
}
