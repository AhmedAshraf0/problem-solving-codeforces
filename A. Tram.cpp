//
// Created by CST on 07-Jan-22.
//
#include<iostream>
using namespace std;
int main()
{
    int t , total = 0 , max = 0;
    cin>>t;
    while(t--)
    {
        int byePeople , hiPeople;
        cin>>byePeople>>hiPeople;
        total -= byePeople;
        total += hiPeople;
        if(max < total)
            max =  total;
    }
    cout<<max;
}

