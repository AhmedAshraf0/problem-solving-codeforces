//
// Created by CST on 08-Jan-22.
//
#include<iostream>
using namespace std;
int main()
{
    int t , rooms = 0;
    cin>>t;
    while(t--)
    {
        int p , q;
        cin>>p>>q;
        if((q - p) >= 2)
            rooms++;
    }
    cout<<rooms;
}