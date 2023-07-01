//
// Created by CST on 25-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long s;
    int n;
    cin>>s>>n;
    int arr[n][2];
    for(int r = 0 ; r < n ; ++r){
        for(int col = 0 ; col < 2 ; ++col){
            cin>>arr[r][col];
        }
    }

    //sorting the array
    for(int r = 0 ; r < n - 1 ; ++r){
        bool check = false;
        int min = r;
        for(int j = r + 1 ; j < n ; ++j){
            if(arr[j][0] < arr[min][0]){
                check = true;
                min = j;
            }
        }
        if(check){
            swap(arr[r][0] , arr[min][0]);
            swap(arr[r][1] , arr[min][1]);
        }
    }

    for(int r = 0 ; r < n ; ++r){
        if(s > arr[r][0]){
            s += arr[r][1];
        }else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
