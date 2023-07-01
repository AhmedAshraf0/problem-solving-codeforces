//
// Created by CST on 18-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1 = "I hate " , str2 = "I love " , it = "it " , that = "that ";
    int n;
    cin>>n;
    for(int i = 1 ; i <= n ; ++i){
        if(i % 2 != 0){
            cout<<str1;
            if(i != n)
                cout<<that;
        }else{
            cout<<str2;
            if(i != n)
                cout<<that;
        }
    }
    cout<<it;
}
