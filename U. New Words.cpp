//
// Created by CST on 17-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int egypt[5] = {0,0,0,0,0} , s = (int)str.size();
    for(int i = 0 ; i < s ; ++i){
        str[i] = tolower(str[i]);
    }
    for(int i = 0 ; i < s ; ++i){
        if(str[i] == 'e')
            egypt[0]++;
        else if(str[i] == 'g')
            egypt[1]++;
        else if(str[i] == 'y')
            egypt[2]++;
        else if(str[i] == 'p')
            egypt[3]++;
        else if(str[i] == 't'){
            egypt[4]++;
        }
    }
    sort(egypt , egypt+5);
    cout<<egypt[0];
}
