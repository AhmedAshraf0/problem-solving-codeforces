//
// Created by CST on 01-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int sumFunc(int arr[] , int s){
    int sum = 0;
    for(int i = 0 ; i < s ; ++i)
        sum += arr[i];
    return sum;
}
void setter(int arr[] , int s){
    for(int i = 0 ; i < s ; ++i)
        cin>>arr[i];
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int si, k;
        cin >> si >> k;
        int a[si], b[si];
        setter(a, si);
        setter(b, si);
        while (k--) {
            bool yes = false;
            int amin = 0, bmax = 0;
            for (int i = 1; i < si; ++i) {
                if (a[amin] > a[i])
                    amin = i;
                if (b[bmax] < b[i])
                    bmax = i;
            }
            if (a[amin] < b[bmax]) {
                swap(a[amin], b[bmax]);
                yes = true;
            } else {
                yes = false;
            }
            if (!yes)
                break;
        }
        cout << sumFunc(a, si) << endl;
    }
}
