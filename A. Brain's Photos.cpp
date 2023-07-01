//
// Created by CST on 13-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int row , col;
    bool color = false;
    cin>>row>>col;
    string arr[row][col];
    for(int i = 0 ; i < row ; ++i)
        for(int j = 0 ; j < col ; ++j){
            cin>>arr[i][j];
            if(arr[i][j] == "C" || arr[i][j] == "M" || arr[i][j] == "Y")
                color = true;
        }
    if(color)
        cout<<"#Color";
    else
        cout<<"#Black&White";
}
