//
// Created by CST on 29-May-22.
//
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, sum = 0;
    cin >> n;
    if (n > 1) {
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            sum += arr[i];
        }
        for (int i = 0; i < n; ++i) {
            int dsum = 0;
            for (int j = i; j < n; ++j) {
                dsum += arr[j];
                if (dsum == sum-dsum) {
                    cout << "YES";
                    return 0;
                }
            }
        }
        cout<<"NO";
    } else
        cout << "NO";
}