/*
CST
27-Sep-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<0;
        }else{
            string str = to_string(n);
            if(str.size() == 1)
                cout<<-1;
            else{
                for(int i = 0 ; i < str.size() ; ++i){
                    if((str[i]-48) % 2 == 0 && i != 0){
                        cout<<2;
                        break;
                    }else if((str[i]-48) % 2 == 0 && i == 0){
                        cout<<1;
                        break;
                    }
                    if(i == str.size()-1)
                        cout<<-1;
                }
            }
        }
        cout<<'\n';
    }
}
