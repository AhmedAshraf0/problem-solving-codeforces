//
// Created by CST on 09-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for(int i = 0 ; i < (int)str.size() ; ++i)
    {
        if((str[i] == 'H')  || (str[i] == 'Q') || (str[i] == '9'))
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}