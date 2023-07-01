/*
CST
12-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , m;
    long long sum = 0;
    bool found = false;
    cin>>n>>m;
    int arr[n];
    for (auto &item: arr){
        cin>>item;
        sum += item;
    }
    sort(arr,arr+n);
    int ptr1 = 0 , ptr2 = n-1;
    while(!false){

    }
}
