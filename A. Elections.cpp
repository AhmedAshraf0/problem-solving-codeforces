//
// Created by CST on 27-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> v(3);
        for (auto &item: v)
            cin >> item;
        int m = *max_element(v.begin(), v.end()), idx, ctr = 0;
        bool check = false;
        for (int i = 0; i < 3; ++i) {
            if (v[i] == m) {
                if (!check) {
                    idx = i;
                    check = true;
                }
                ctr++;
            }
        }
        if (ctr > 1) {
            for (int i = 0; i < 3; ++i) {
                if(v[i] == m){
                    cout << 1 << ' ';
                }else{
                    cout<<m-v[i]+1<< ' ';
                }
            }
        } else {
            for (int i = 0; i < 3; ++i) {
                if (v[i] < m) {
                    cout << m - v[i] + 1;
                } else if (v[i] == m && i == idx) {
                    cout << 0;
                } else if (v[i] == m && i != idx) {
                    cout << 1;
                }
                cout << ' ';
            }
        }
        cout << '\n';
    }
}
