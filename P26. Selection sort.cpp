//
// Created by CST on 14-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    for(int i = 0 ; i < n - 1 ; ++i){
        int min = i;//initial
        for(int j = i + 1 ; j < n ; ++j){
            if(arr[j] < arr[min])
                min = j;//index of a smaller element (dynamic)
        }
        swap(arr[i] , arr[min]);
        for(int k = 0 ; k < n ; ++k){
            cout<<arr[k]<<' ';
        }
        cout<<endl;
    }

}