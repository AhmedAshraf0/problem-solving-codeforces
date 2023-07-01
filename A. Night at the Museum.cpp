//
// Created by CST on 29-Dec-21.
//think at gravity
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    char c = 'a';//moxa
    cin>>str;
    int ctr = 0;
    for(int i = 0 ; i < (int)str.size() ; ++i)
    {
        int value = abs(int(c) - int(str[i])) , check = value , check2 = abs(value - 26);
        if(check >= check2)
            ctr += check2;//i add the small one
        else
            ctr += check;
        c = str[i];
    }
    cout<<ctr;
}
