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
    string str1, str2;
    getline(cin,str1);
    getline(cin,str2);
    int num1, num2;
    double s1, s2, t1, t2;
    num1 = int(str1[7]) - 48;
    num2 = int(str2[7]) - 48;
    //str1speed
    string str1s = str1.substr(str1.find("at") + 3 , ((str1.find("at") + 3) - (str1.find("meters") - 2)) + 1);
    s1 = stod(str1s);
    //str1totaldistance
    string str1t = str1.substr(str1.find("covered") + 8 , ((str1.find("covered") + 8) - (str1.rfind("meters") - 2)) + 1);
    t1 = stod(str1t);

    //str2speed
    string str2s = str2.substr(str2.find("at") + 3 , ((str2.find("at") + 3) - (str2.find("meters") - 2)) + 1);
    s2 = stod(str2s);
    //str2totaldistance
    string str2t = str2.substr(str2.find("covered") + 8 , ((str2.find("covered") + 8) - (str2.rfind("meters") - 2)) + 1);
    t2 = stod(str2t);
    double d1 = (400.0-t1) / s1, d2 = (400.0-t2) / s2;//time in seconds for every runner
    if(d1 < d2)
        cout<<"Runner "<<num1<<' '<<"wins";
    else
        cout<<"Runner "<<num2<<' '<<"wins";
}
