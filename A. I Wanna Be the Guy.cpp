//
// Created by CST on 19-Jan-22.
//
#include<iostream>
using namespace std;
int main(){
    int n , p , q;
    bool check = false;
    cin>>n>>p;
    int arr1[p];
    for(int i = 0 ; i < p ; ++i)
        cin>>arr1[i];
    cin>>q;
    int arr2[q];
    for(int i = 0 ; i < q ; ++i)
        cin>>arr2[i];
    int size = p + q;
    int arr3[size];
    for(int i = 0 ; i < size ; ++i){
        if(i < p){//keep moving until p
            arr3[i] = arr1[i];
        }else{//if p finished start q
            arr3[i] = arr2[i-p];
        }
    }
    for(int i = 1 ; i <= n ; ++i){
        for(int j = 0 ; j < size ; ++j){
            if(arr3[j] == i){
                check = true;
                break;
            }else{
                check = false;
            }
        }
        if(!check){
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    if(check)
        cout<<"I become the guy.";
}
