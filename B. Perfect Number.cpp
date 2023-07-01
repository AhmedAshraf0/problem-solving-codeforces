/*
CST
10-Nov-22
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
    long long sum = 19;
    cin>>n;
    while(true){
        string str = to_string(sum) , str2 = "0";
        int s = 0;
        for(int i = 0 ; i < str.size() ; ++i){
            s+= stoi(str2+str[i]);
        }
        if(s == 10)
            n--;
        if(!n)
            break;
        sum+=9;
    }
    cout<<sum;
}
