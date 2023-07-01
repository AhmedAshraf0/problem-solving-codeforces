/*
CST
28-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int c , n , sum = 0;
    cin>>c>>n;
    int ncopy = n;
    while(n--){
        int n1,n2;
        cin>>n1>>n2;
        if(n1 > c || sum > c || sum < 0 || (n1 != 0 && n == 0) || (n1 !=0 && (n+1 == ncopy) && n2 != 0)){
            cout<<"YES";
            return 0;
        }
        sum -= n2;
        sum += n1;
    }
    if(sum == 0)
        cout<<"NO";
    else
        cout<<"YES";
}
