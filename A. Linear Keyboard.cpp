//
// Created by CST on 26-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str1 , str2;
        cin>>str1>>str2;
        int s = (int)str2.size() - 1 , value = 0;
        for(int i = 0 ; i < s ; ++i){
            if(str2[i] == str2[i+1])
                continue;
            int n1  = str1.find(str2[i]), n2 = str1.find(str2[i+1]);
            value += (abs(n1-n2));
        }
        cout<<value<<endl;
    }
}
