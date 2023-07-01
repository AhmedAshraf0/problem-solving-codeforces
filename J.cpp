/*
CST
13-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<long long >v1;
    string str , str2 = "";
    int num;
    cin>>str;
    num = stoi(str);
    if(str.size() < 9){
        int si;
        if(!(str.size() % 2))
            si = str.size()/2;
        else
            si = str.size()/2 + 1;
        for(int i = 0 ; i < si ; ++i)
            str2 += "4";
        for(int i = 0 ; i < si ; ++i)
            str2 += "7";
        do{
            v1.push_back(stoi(str2));
        } while (next_permutation(str2.begin(),str2.end()));
        if(str.size() == 1 || str.size() == 2){
            v1.push_back(4477);
        }else if(str.size() == 3 || str.size() == 4){
            v1.push_back(444777);
        }else if(str.size() == 5 || str.size() == 6){
            v1.push_back(44447777);
        }else if(str.size() == 7 || str.size() == 8){
            v1.push_back(4444477777);
        }
        sort(v1.begin(),v1.end());
        for(int i = 0 ; i < v1.size() ; ++i)
            if(v1[i] >= num){
                cout<<v1[i];
                return 0;
            }
    }else{
        for(int i = 0 ; i < 5 ; ++i)
            cout<<4;
        for(int i = 0 ; i < 5 ; ++i)
            cout<<7;
    }
}
