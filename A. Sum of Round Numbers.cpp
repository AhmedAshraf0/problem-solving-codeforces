//
// Created by CST on 16-Mar-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int ctr = 0;
        string str;
        cin>>str;
        if(str.size() == 1){
            cout<<1<<endl<<str<<endl;
            continue;
        }else{
            for(int i = 0 ; i < str.size() ; ++i){
                if(str[i] != '0')
                    ctr++;
            }
            if(ctr == 1){
                cout<<1<<endl<<str<<endl;
            }else{
                cout<<ctr<<endl;
                for(int i = str.size()-1 ; i >= 0 ; --i){
                    stringstream ss;
                    int n;
                    ss << str[i];
                    ss >> n;
                    if(n != 0){
                        cout<<n * pow(10,abs(i-(int)str.size())) << ' ' ;
                    }
                }
            }
        }
    }
}
