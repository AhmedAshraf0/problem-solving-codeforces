/*
CST
12-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;
int arr[10] = {1,2,3,4,5,6,7,8,8,8};
int FirstBS(int start , int end , int val){
    while(start < end){
        int mid = start + (end-start)/2;
        if(arr[mid] < val) start = mid+1;
        else if(arr[mid] > val) end = mid - 1;
        else end = mid;
    }
    return start;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout<<FirstBS(0,6,8);
}
