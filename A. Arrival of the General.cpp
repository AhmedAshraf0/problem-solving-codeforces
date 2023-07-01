//
// Created by CST on 20-Jan-22.
//
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    int max , min;
    if(arr[0] > arr[1]){
        max = 0;
        min = 1;
    }else if(arr[0] == arr[1]) {
        max = 0;
        min = 1;
    }else{
        max = 1;
        min = 0;
    }
    for(int i = 2 ; i < n ; ++i){
        if(arr[i] > arr[max]){
            max = i;
        }else if(arr[i] <= arr[min]){
            min = i;
        }
    }
    if(max > min){
        cout<<((max + (n - 1) - min) - 1);
    }else{
        cout<<((max + (n - 1) - min));
    }
}
