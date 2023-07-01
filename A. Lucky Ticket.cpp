//
// Created by CST on 14-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , arr[] = {0,0};
    string str;
    cin>>n>>str;
    for(int i = 0 ; i < n ; ++i){
        if(str[i] == '4' || str[i] == '7'){
            if(i <= n/2 - 1){
                arr[0] += int(str[i]);
            }else{
                arr[1] += int(str[i]);
            }
        }else{
            cout<<"NO";
            return 0;
        }
    }
    if(arr[0] == arr[1])
        cout<<"YES";
    else
        cout<<"NO";
}