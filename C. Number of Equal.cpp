/*
CST
07-Jul-22
*/
#include<bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long total = 0;
    bool once = true;
    long long n , m , ctr1 = 0 , ctr2 = 0;
    cin>>n>>m;
    vector<long long>a(n+5),b(m+5);
    a[n] = INT_MAX;b[m] = INT_MAX;
    for(int i = 0 ; i < n ; ++i)
        cin>>a[i];
    for(int i = 0 ; i < m ; ++i)
        cin>>b[i];
    for(int ptr1 = 0,ptr2 = 0 ; a[ptr1] != INT_MAX || b[ptr2] != INT_MAX ; ){
        if(a[ptr1] == b[ptr2]){
            if(once){
                ctr1++;ctr2++;once = false;
            }
            if((ptr1 < n)&& (a[ptr1+1] == a[ptr1])){
                ctr1++;
                ptr1++;
                continue;
            }else if((ptr2 < m) && (b[ptr2+1] == b[ptr2])){
                ctr2++;
                ptr2++;
                continue;
            }else{
                total += (ctr1 * ctr2);
                once = true;
                ptr1++;
                ptr2++;
                ctr1 = 0;
                ctr2 = 0;
            }
        }else if(a[ptr1] < b[ptr2]){
            ptr1++;
            once = true;
        }else{
            ptr2++;
            once = true;
        }
    }
    cout<<total;
}
