//
// Created by CST on 08-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
    string str1 , str2;
    cin>>str1>>str2;
    int arr[2] , arr2[2];
    arr[0] = stoi(str1.substr(0,2));
    arr[1] = stoi(str1.substr(3,5));
    arr2[0] = stoi(str2.substr(0,2));
    arr2[1] = stoi(str2.substr(3,5));
    if(arr[1]-arr2[1] < 0){
        arr[1] += 60;
        arr[0]--;
    }
    if(arr[0]-arr2[0] < 0)
        arr[0] += 24;
    arr[0] -= arr2[0];
    arr[1] -= arr2[1];
    string str3 , str4;
    str3 = to_string(arr[0]);
    if(str3.size() == 1)
        str3 = '0' + str3;
    str4 = to_string(arr[1]);
    if(str4.size() == 1)
        str4 = '0' + str4;
    cout<<str3<<':'<<str4;
}