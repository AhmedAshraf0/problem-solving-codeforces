//
// Created by CST on 06-Jan-22.
//
#include<iostream>
using namespace std;
int main()
{
    int n , k , ctr = 0;
    cin>>n>>k;
    int arr[n] , s = k + 1;
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    for(int i = 0 ; i < n ; ++i)
    {
        bool check[s];
        for(int ii = 0 ; ii < s ; ++ii)
            check[ii] =false;
        while(arr[i] != 0)
        {
            check[arr[i] % 10] = true;
            arr[i] /= 10;
        }
        bool good = false;
        for(int j = 0 ; j < s ; ++j)
        {
            if(check[j])
            {
                good = true;
            }else
            {
                good = false;
                break;
            }
        }
        if(good)
            ctr++;
    }
    cout<<ctr;
}
