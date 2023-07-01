//
// Created by CST on 10-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long arr[n] , max = 0 , min = 0;
        for(int i = 0 ; i < n ; ++i)
        {
            cin>>arr[i];
            if(arr[i] > max)
                max = arr[i];
        }
        min = arr[0];
        for(int i = 1 ; i < n ; ++i)
        {
            if(arr[i] < min)
                min = arr[i];
        }
        cout<<max-min<<endl;
        //bool once = true;
        /*for(int i = 0 ; i < n ; ++i)
        {
            if(arr[i] < max)
            {
                arr[i]++;
                if(once)
                {
                    ctr++;
                    once = false;
                }
            }
        }*/
    }
}