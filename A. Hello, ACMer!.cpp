/*
CST
29-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string str;
    int ctr = 0;
    cin>>str;
    for(int i = find(str.begin(),str.end(),'h')-str.begin() ; i < str.size() ; ++i) {
        if(str[i] == 'h'){
            if(str[i+1] == 'z'){
                if(str[i+2]=='n'){
                    if(str[i+3]=='u'){
                        ctr++;
                        continue;
                    }
                }
            }
        }
        i = find(str.begin()+i+1,str.end(),'h')-str.begin()-1;
    }
    cout<<ctr;
}
