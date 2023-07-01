/*
CST
03-Jul-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    if((n % 3) == 0){
        if((n/3)% 3 != 0)
            for(int i = 0 ; i < 3 ; ++i)
                cout<<n/3<<' ';
        else
            cout<<n/3-1<<' '<<n/3+2<<' '<<n/3-1;
    }else{
        cout<<n/3-1<<' '<<n/3+2<<' '<<n/3-1;
    }
}
