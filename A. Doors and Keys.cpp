//
// Created by CST on 22-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        bool check = 0;
        int s;
        cin >> str;
        s = (int) str.size();
        for (int i = 0; i < s; ++i) {
            if (str[i] < 91) {
                for (int j = 0; j < i; ++j) {//if first is a door
                    if(str[j] == tolower(str[i])){
                        check = 1;
                        break;
                    }else{
                        check = 0;
                    }
                }
                if(!check){
                    cout<<"No"<<endl;
                    break;
                }
            }
        }
        if(check){
            cout<<"YES"<<endl;
        }
    }
}