//
// Created by CST on 31-May-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int r , c;
    cin>>r>>c;
    char arr[r][c];
    for(int row = 0 ; row < r ; ++row){
        for(int col = 0 ; col < c ; ++col)
            cin>>arr[row][col];
    }
    int mctr = 0;
    for(int row = 0 ; row < r ; ++row){
        int ctr = 0;
        for(int col = 0 ; col < c ; ++col){
            if(arr[row][col] == '.'){
                ctr++;
                arr[row][col] = ',';
            }else if(arr[row][col] == 'S'){
                if(ctr > 0){
                    for(int j = 0 ; j < c ; ++j){
                        if(arr[row][j] == ',')
                            arr[row][j] = '.';
                    }
                }
                ctr = 0;
                break;
            }
        }
        mctr += ctr;
    }

    for(int col = 0 ; col < c ; ++col){
        int ctr = 0;
        for(int row = 0 ; row < r ; ++row){
            if(arr[row][col] == '.'){
                ctr++;
                arr[row][col] = ',';
            }else if(arr[row][col] == 'S'){
                if(ctr > 0){
                    for(int j = 0 ; j < r ; ++j){
                        if(arr[j][col] == ',')
                            arr[j][col] = '.';
                    }
                }
                ctr = 0;
                break;
            }
        }
        mctr += ctr;
    }
    cout<<mctr;
}