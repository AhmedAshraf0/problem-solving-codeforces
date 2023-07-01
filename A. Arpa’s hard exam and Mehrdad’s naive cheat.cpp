//
// Created by CST on 25-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {6,8,4,2} , n;
    cin>>n;
    if(n == 1)
        cout<<8;
    else if(n > 1)
        cout<<arr[n%4];
    else
        cout<<1;
}