//
// Created by CST on 31-Dec-21.
//
#include<iostream>
using namespace std;
int main()
{
    int x , t , idx , value;
    cin>>x;
    int arr[x];
    for(int i = 0 ; i < x ; ++i)
        cin>>arr[i];
    cin>>t;
    while(t--)
    {
        cin>>idx>>value;
        idx--;value--;//zero indexed
        arr[idx]--;//one bird died
        int l = value;//num of birds
        int r = arr[idx] - value;
        if(idx != 0 && idx != (x-1))
        {
            arr[idx-1] += l;
            arr[idx+1] += r;
            arr[idx] = 0;
        }else if(idx == 0)
        {
            arr[idx+1] += r;
            arr[idx] = 0;
            l = 0;
        }else
        {//if idx == x -1
            arr[idx-1] += l;
            arr[idx] = 0;
            r = 0;
        }
    }
    for(int i = 0 ; i < x ; ++i)
        cout<<arr[i]<<endl;
}