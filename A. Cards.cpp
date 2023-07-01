/*
CST
13-Oct-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    vector<int> freq(26, 0);
    string str;
    cin >> n >> str;
    for (int i = 0; i < n; ++i)
        freq[str[i]-97]++;
    int mi = 0;
    if (freq[4] && freq[13] && freq[14]) {
        mi = min(min(freq[13], freq[14]), freq[4]);
        freq[4] -= mi;
        freq[13] -= mi;
        freq[14] -= mi;
    }

    for (int i = 0; i < mi; ++i) {
        cout << 1 << ' ';
    }

    int mi2 = 0;
    if (freq[4] && freq[14] && freq[17] && freq[25])
        mi2 = min(min(min(freq[14], freq[25]), freq[4]), freq[17]);
    for (int i = 0; i < mi2; ++i) {
        cout << 0 << ' ';
    }
}
