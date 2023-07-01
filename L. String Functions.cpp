//
// Created by CST on 12-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , q;
    string str;
    cin>>n>>q>>str;
    while(q--){
        string str2;
        cin>>str2;
        if(str2 == "pop_back"){
            str.pop_back();
            n--;
        }else if(str2 == "front"){
            cout<<str[0]<<endl;
        }else if(str2 == "back"){
            cout<<str[n-1]<<endl;
        }else if(str2 == "sort"){
            int l , r;
            cin>>l>>r;
            if(l>r)
                swap(l,r);
            sort(str.begin() + l - 1, str.begin() + r);
        }else if(str2 == "reverse"){
            int l , r;
            cin>>l>>r;
            if(l>r)
                swap(l,r);
            reverse(str.begin()+ l - 1 , str.begin() + r);
        }else if(str2 == "print"){
            int idx;
            cin>>idx;
            cout<<str[idx-1]<<endl;
        }else if(str2 == "substr"){
            int l , r;
            cin>>l>>r;
            if(l>r)
                swap(l,r);
            cout<<str.substr(l -1 , r-l+1)<<endl;
        }else if(str2 == "push_back"){
            char text;
            cin>>text;
            str.push_back(text);
            n++;
        }
    }
}
