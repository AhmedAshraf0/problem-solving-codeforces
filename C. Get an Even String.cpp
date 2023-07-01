//
// Created by CST on 31-Mar-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int arr[26] , total = 0;
        for(int i = 0 ; i < 26 ; ++i)
            arr[i] = 0;
        for(int i = 0 ; i < str.size() ; ++i){
            arr[int(str[i])-97]++;
        }
        for(int i = 0 ; i < 26 ; ++i){
            if(arr[i] == 0){
                continue;
            }else{
                if(arr[i] % 2 != 0){
                    --arr[i];
                    ++total;
                }
            }
        }
        cout<<total<<endl;
    }
}
