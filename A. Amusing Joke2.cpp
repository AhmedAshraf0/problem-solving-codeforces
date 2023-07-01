//
// Created by CST on 21-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[26] , arr2[26];//arr for str3 & arr2 for str1 and str2
    for(int i = 0 ; i < 26 ; ++i){
        arr[i] = 0;
        arr2[i] = 0;
    }
    string str1 , str2 , str3;
    cin>>str1>>str2>>str3;
    for(int i = 0 ; i < str3.size() ; ++i){
        arr[str3[i]-65]++;
        if(i < str1.size())
            arr2[str1[i]-65]++;
        if(i < str2.size())
            arr2[str2[i]-65]++;
    }
    for(int i = 0 ; i < 26 ; ++i){
        if(arr[i] != arr2[i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
