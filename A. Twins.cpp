//
// Created by CST on 10-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , sum = 0 , ctr = 0;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n ; ++i)
        cin>>arr[i];
    sort(arr , arr + n);
    for(int i = n - 1 ; i >= 0 ; --i)
    {
        int sum2 = 0;
        sum += arr[i];
        ctr++;
        for(int j = 0 ; j < i ; ++j)
            sum2 += arr[j];
        if(sum > sum2)
        {
            cout<<ctr;
            break;
        }
    }
}
