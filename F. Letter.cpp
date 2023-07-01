/*
CST
08-Jul-22
*/
#include<bits/stdc++.h>

using namespace std;
int arrU1[26],arrL1[26] , arrU2[26],arrL2[26];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string str1 , str2;
    getline(cin,str1);
    getline(cin,str2);
    for(int i = 0 ; i < str1.size() ; ++i){
        if(str1[i] == ' ')
            continue;
        int num = int(str1[i]);
        if(num < 91)
            arrU1[num-65]++;
        else
            arrL1[num-97]++;
    }
    for(int i = 0 ; i < str2.size() ; ++i){
        if(str2[i] == ' ')
            continue;
        int num = int(str2[i]);
        if(num < 91)
            arrU2[num-65]++;
        else
            arrL2[num-97]++;
    }

    for(int i = 0 ; i < str2.size() ; ++i){
        if(str2[i] == ' ')
            continue;
        int num = int(str2[i]);
        if(num < 91){
            if(arrU1[num-65] < arrU2[num-65]){
                cout<<"NO";
                return 0;
            }
        }else{
            if(arrL1[num-97] < arrL2[num-97]){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
}
