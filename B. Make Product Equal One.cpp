/*
CST
09-Oct-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , product = 1;
    long long  total = 0;
    bool zero = false;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i  < n ;++i)
        cin>>arr[i];
    for(int i = 0 ; i  < n ;++i){
        if(arr[i] == 0){
            zero = true;
            arr[i]++;
            total++;
        }else if(arr[i] > 0){
            total += (arr[i]-1);
            arr[i] = 1;
        }else{
            total += (abs(arr[i])-1);
            arr[i] = -1;
        }
        product *= arr[i];
    }
    if(!zero){
        if(product == -1)
            total += 2;
    }
    cout<<total;
}
