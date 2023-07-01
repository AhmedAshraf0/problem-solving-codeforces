//
// Created by CST on 14-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int s = (int)str.size();
    for(int i = 0 ; i < s ; ++i){
        string test = str.substr(0 , i+1) , test2 = str.substr(i+1 , (s-i-1));
        sort(test.begin(), test.end());
        sort(test2.begin(), test2.end());
        str = test + test2;
    }
    cout<<str;
}
