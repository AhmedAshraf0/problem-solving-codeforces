/*
CST
03-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , ctr = 0;;
    string str , str2;
    cin>>n>>str;
    for(int i = 0 ; i < n-1 ; i++){
        int sctr = 0;
        for(int j = 0 ; j < n-1 ; j++){
            if(!i){
                if(str.substr(i,2) == str.substr(j,2)){
                    ctr++;
                    str2 = str.substr(i,2);
                }
                continue;
            }
            if(str.substr(i,2) == str.substr(j,2))
                sctr++;
            if(j == n-2){
                if(sctr > ctr){
                    ctr = sctr;
                    str2 = str.substr(i,2);
                }
            }
        }
    }
    cout<<str2;
}
