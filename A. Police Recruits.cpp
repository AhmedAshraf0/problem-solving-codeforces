//
// Created by CST on 25-Dec-21.
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
        if(arr[i] > 0)
        {
            int police = arr[i];
            for(int j = i + 1 ; j < n ; ++j)
            {
                if(police > 0)
                {
                    if(arr[j] == -1)
                    {
                        arr[j] = 0;
                        police--;
                    }
                }
            }
        }
    }
    int crimeNum = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        if(arr[i] == -1)
            crimeNum++;
    }
    cout<<crimeNum;
}
