//
// Created by CST on 27-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ctr = 0 , size = (int)s.size();
    for(int i = 0 ; i < size ; ++i)
        if(s[i] == 'a')
            ctr++;
    if(ctr > (size/2)){
        cout<<size;
    }else if(ctr == (size/2)){
        cout<<++ctr;
    }else{
        cout<<(size-ctr)-ctr;
    }

}
