//
// Created by CST on 08-Jan-22
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , one = 0 , zero = 0;
    string str;
    cin>>n>>str;
    for(int i = 0 ; i < n ; ++i){
        if(str[i] == '0'){
            zero++;
        }else{
            one++;
        }
    }
    cout<<abs(one-zero);
}
