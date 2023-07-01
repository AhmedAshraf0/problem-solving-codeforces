//
// Created by CST on 23-JUN-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , s , ptr1 , ptr2 , ctr = 0;
    cin>>n>>s;
    ptr1 = s - 1;
    ptr2 = s - 1;
    //1 1 1 0 1 0
    int arr[n];
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    if(arr[ptr1])
        ctr++;
    ptr1--;
    ptr2++;
    while(ptr1 >= 0 || ptr2 != n){
        if(ptr1 >= 0 && ptr2 != n){
            if(arr[ptr1] && arr[ptr2])
                ctr += 2;
            ptr1--;
            ptr2++;
        }else if(ptr1 >= 0 && ptr2 == n){
            if(arr[ptr1])
                ctr++;
            ptr1--;
        }else if(ptr2 != n && ptr1 < 0){
            if(arr[ptr2])
                ctr++;
            ptr2++;
        }
    }
    cout<<ctr;
}
