/*
CST
12-Oct-22
*/
#include<bits/stdc++.h>

using namespace std;

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
        cin >> str1 >> str2;
        if (str1[str1.size() - 1] == 'L' && str2[str2.size() - 1] != 'L') {
            cout<<'>';
        }else if (str2[str2.size() - 1] == 'L'  && str1[str1.size() - 1] != 'L'){
            cout<<'<';
        }else if (str1[str1.size() - 1] == 'M' && str2[str2.size() - 1] != 'M'){
            cout<<'>';
        }else if (str2[str2.size() - 1] == 'M'  && str1[str1.size() - 1] != 'M'){
            cout<<'<';
        }else if(str1[str1.size()-1] == 'S'){
            if(str1.size() < str2.size()){
                cout<<'>';
            }else if(str1.size() > str2.size()){
                cout<<'<';
            }else{
                cout<<'=';
            }
        }else if(str1[str1.size()-1] == 'L'){
            if(str1.size() < str2.size()){
                cout<<'<';
            }else if(str1.size() > str2.size()){
                cout<<'>';
            }else{
                cout<<'=';
            }
        }else if(str1[str1.size()-1] == 'M'){
            cout<<'=';
        }
        cout<<'\n';
    }
}
