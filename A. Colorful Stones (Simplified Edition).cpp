//
// Created by CST on 27-Dec-21.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ptr1 = 0 , ptr2 = 0;
    string str1 , str2;
    cin>>str1>>str2;
    while(ptr2 != (int)str2.size())
    {
        if(str1[ptr1] == str2[ptr2])
        {
            ptr1++;
            ptr2++;
        }else
        {
            ptr2++;
        }
    }
    cout<<ptr1+1;
}
