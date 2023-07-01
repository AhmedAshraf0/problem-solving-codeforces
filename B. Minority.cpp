//
// Created by CST on 23-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int zeros = 0 , ones = 0 , s = (int)str.size();
        if(s == 1){
            cout<<0<<endl;
        }else{
            for(int i = 0 ; i < s ; ++i){
                if(str[i] == '0')
                    zeros++;
                else
                    ones++;
            }
            if(zeros == 0 || ones == 0 || (ones == zeros)){
                cout<<0<<endl;
            }else if(zeros > ones){
                cout<<ones<<endl;
            }else if(ones > zeros){
                cout<<zeros<<endl;
            }
        }
    }
}
