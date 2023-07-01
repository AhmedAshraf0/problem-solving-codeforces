//
// Created by CST on 17-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double sum = 0.0;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; ++i){
        cin>>arr[i];
        sum += arr[i];
    }
    double avg = sum/n;
    cout<<fixed<<setprecision(12)<<avg;
}
