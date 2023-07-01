/*
CST
01-Dec-22
*/
#include<bits/stdc++.h>

using namespace std;
int arr[26];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string str;
    cin>>str;
    for(int i = 0 ;i  < str.size(); ++i)
        cin>>str[i];
    for(int i = 0 ; i < str.size() ; ++i)
        arr[str[i]-97]++;
    //always there is a n shared so only one word need 2 ns
    cout<<min(min(min(arr[101-97]/3,(arr[110-97]-1)/2),arr[116-97]),arr[105-97]);
}
