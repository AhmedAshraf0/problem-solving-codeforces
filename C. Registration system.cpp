//
// Created by CST on 26-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string arr[n*2];
    for(int i = 0 ; i < n*2 ; i +=2){
        bool existed = false;
        if(i == 0){
            cin>>arr[i];
            arr[i+1] = "0";
            cout<<"OK"<<endl;
            continue;
        }
        string str;
        cin>>str;
        for(int j = 0 ; j < i ; j +=2){
            if(str == arr[j]){
                string str2 = "0";
                str2 += arr[j+1];
                int num = stoi(str2);
                ++num;
                arr[j+1] = to_string(num);
                cout<<arr[j]<<arr[j+1]<<endl;
                existed = true;
                break;
            }
        }
        if(existed){
            continue;
        }else{
            arr[i] = str;
            arr[i+1] = "0";
            cout<<"OK"<<endl;
        }
    }
}
