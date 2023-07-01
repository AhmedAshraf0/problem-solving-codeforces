//
// Created by CST on 02-Jan-22.
//
#include<iostream>
using namespace std;
int main()
{
    int n , b , d , total = 0 , ctr = 0;
    cin>>n>>b>>d;
    int arr[n];
    for(int i  = 0  ; i < n ; ++i)
        cin>>arr[i];
    for(int i = 0 ; i < n ; ++i)
    {
        if(arr[i] <= b)
        {
            if(total <= d)//i target the overflow when total > d
            {
                total += arr[i];
                if(total > d)
                {
                    ctr++;
                    total = 0;
                }
            }else
            {
                ctr++;
                total = 0;
            }
        }else
        {
            continue;
        }
    }
    cout<<ctr;
}
