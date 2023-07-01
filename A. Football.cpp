//
// Created by CST on 08-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , ctr1 = 0 , ctr2 = 0;
    cin>>n;
    string arr[n] , teams[2];
    for(int i = 0 ; i <  n ; ++i)
        cin>>arr[i];
    teams[0] = arr[0];
    for(int i = 1 ; i < n ; ++i)
    {
        if(arr[i] != teams[0])
        {
            teams[1] = arr[i];
            break;
        }
    }
    for(int i = 0 ; i < n ; ++i)
    {
        if(arr[i] == teams[0])
            ctr1++;
        else
            ctr2++;
    }
    if(ctr1 > ctr2)
        cout<<teams[0];
    else
        cout<<teams[1];
}
