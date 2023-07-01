/*
CST
25-Jul-22
*/
#include<bits/stdc++.h>

using namespace std;
int freqarr[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        int n;
        long long sum = 0;
        cin >> str1 >> n;
        str2 = str1;
        int s = str1.size();
        for (int i = 0; i < s; ++i)
            sum += (str1[i] - 97) + 1;
        if (n >= sum) {
            cout << str1 << '\n';
            continue;
        }
        sort(str2.begin(), str2.end());
        for (int i = s - 1; i >= 0; --i) {
            if (n < sum) {
                if (sum - ((str2[i] - 97) + 1) >= n) {
                    sum -= (str2[i] - 97) + 1;
                    freqarr[str2[i] - 97]++;
                } else if ((sum - ((str2[i] - 97) + 1) < n) && (sum > n)) {
                    sum -= (str2[i] - 97) + 1;
                    freqarr[str2[i] - 97]++;
                }
            } else
                break;//print outside
        }
        for (int i = 0; i < str1.size(); ++i)
            if (freqarr[str1[i] - 97] > 0)
                freqarr[str1[i] - 97]--;
            else
                cout << str1[i];
        cout << '\n';
    }
}
