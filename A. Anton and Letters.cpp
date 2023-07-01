//
// Created by CST on 04-Jan-22.
//
#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin , str);
    int ctr = 0;
    for(int i = 1 ; i < (int)str.size() ; i += 3)
    {
        char c = str[i];
        int test = int(c);
        if(test >= 97 && test <= 122)
        {
            ctr++;
            for(int j = i + 3 ; j < (int)str.size() ; j += 3)
            {
                if(str[j] == c)
                    str[j] = ' ';
            }
        }else
            continue;
    }
    cout<<ctr;
}
