//
// Created by CST on 06-Jan-22.
//
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < n ; ++j)
        {
            if(arr[j] - 1 == i)
            {
                cout<<j + 1<<' ';
            }
        }
    }
}
