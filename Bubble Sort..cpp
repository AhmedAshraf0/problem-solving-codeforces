//
// Created by CST on 13-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3, 54, 6 , 2 , 1};
    for(int i = 0 ; i < 5 ; ++i){
        bool flag = false;
        for(int j = 0 ; j < 4 ; ++j)
            if(arr[j] > arr[j + 1]){
                swap(arr[j] , arr[j+1]);
                flag = true;
            }
        if(!flag)//false
            break;
    }
    for(int i = 0 ; i < 5 ; ++i)
        cout<<arr[i]<<" ";
}
