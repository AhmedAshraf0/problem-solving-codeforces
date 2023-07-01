//
// Created by CST on 26-Dec-21.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4] , sum = 0;
    for(int i = 0 ; i < 4 ; ++i)
        cin>>arr[i];
    string str;
    cin>>str;
    for(int i = 0 ; i < str.size() ; ++i)
    {
        int num;
        stringstream str2;
        str2<<str[i];
        str2>>num;
        sum += arr[num-1];
    }
    cout<<sum;
}
