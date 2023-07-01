//
// Created by CST on 14-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2 , 7 , 4 , 1 , 5 , 3};
    for(int i = 0 ; i < 5 ; ++i){
        int min = i;
        for(int j = i + 1 ; j < 6 ; ++j){
            if(arr[j] < arr[min])
                min = j;
        }
        swap(arr[i] , arr[min]);
    }
    for(int i = 0 ; i < 6 ; ++i)
        cout<<arr[i]<<' ';
}
