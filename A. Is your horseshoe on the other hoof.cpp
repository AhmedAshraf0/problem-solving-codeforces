//
// Created by CST on 30-Dec-21.
//
#include<iostream>
using namespace std;
int main()
{
    int arr[4] , ctr = 0;
    for(int i = 0 ; i < 4 ; ++i)
        cin>>arr[i];
    for(int i = 0 ; i < 4 ; ++i)
    {
        for(int j = i + 1 ; j < 4 ; ++j)
        {
            if(arr[i] == arr[j])
            {
                ctr++;
                break;
            }
        }
    }
    cout<<ctr;
}
