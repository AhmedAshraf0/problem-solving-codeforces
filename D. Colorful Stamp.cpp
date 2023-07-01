//
// Created by CST on 21-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> v1;//indices of w
        int s;
        cin>>s;
        char arr[s];
        for(int i  = 0 ; i < s ; ++i){
            cin>>arr[i];
            if(arr[i] == 'W'){
                v1.push_back(i);
            }
        }
        if(s == 1){
            cout<<"no"<<endl;
            continue;
        }else if(s == 2){
            if(arr[0] == 'W' || arr[1] == 'W')
                cout<<"no"<<endl;
            else
                cout<<"yes"<<endl;
        }else{
            bool check , check2 = true;
            for(int i  = 0 ; i < s ; ++i){
                if(arr[i] == 'W'){
                    check = true;
                }else{
                    check = false;
                    break;
                }
            }
            if(check)
                cout<<"yes"<<endl;
            for(int i = 0 ; i < v1.size() ; ++i){
                if(v1[i] == s-1){
                    if(arr[s-2] == 'W' || arr[s-3] == 'W'){
                        cout<<"no"<<endl;
                        check2 = false;
                        break;
                    }
                }else if(v1[i] == s-2){
                    if(arr[s-3] == 'W' || arr[s-4] == 'W' || arr[s-1] == 'W'){
                        cout<<"no"<<endl;
                        check2 = false;
                        break;
                    }
                }else{
                    if(arr[v1[i]-1] == 'W' || arr[v1[i]-2] == 'W'){
                        cout<<"no"<<endl;
                        check2 = false;
                        break;
                    }else if (arr[v1[i]+1] == 'W' || arr[v1[i]+2] == 'W'){
                        cout<<"no"<<endl;
                        check2 = false;
                        break;
                    }
                }
            }
            if(check2){
                cout<<"yes"<<endl;
            }
        }
    }
}
