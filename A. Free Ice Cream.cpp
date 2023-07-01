//
// Created by CST on 05-Jan-22.
//
#include<iostream>
using namespace std;
int main()
{
    int t , ctr = 0;
    long long x;
    cin>>t>>x;
    while(t--)
    {
        char c;
        int d;
        cin>>c>>d;
        if(c == '+')
        {
            x += d;
        }else
        {
            if((x - d) >= 0)
                x -= d;
            else
                ctr++;
        }
    }
    cout<<x<<' '<<ctr;
}
