/*
CST
30-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string str = "Timur";
    vector<string>v1;
    v1.push_back("Timru");
    do{//Timru
        v1.push_back(str);
    }while(next_permutation(str.begin(),str.end()));
    int t;
    cin>>t;
    while(t--){
        int n;
        string str2;
        cin>>n>>str2;
        if(find(v1.begin(),v1.end(),str2) != v1.end())
            cout<<"YES";
        else
            cout<<"NO";
        cout<<'\n';
    }
}
