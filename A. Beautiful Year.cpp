//
// Created by CST on 02-Jan-22.
//
#include<iostream>
using namespace std;
int check(int num)
{
    bool flag = false;
    while(!flag)
    {
        num ++;
        int arr[4] , backupNum = num;
        for(int i = 0 ; i < 4 ; ++i)
        {
            arr[i] = backupNum % 10;
            backupNum /= 10;
        }
        bool unique;
        for(int i  = 0 ; i < 3 ; ++i)
        {
            for(int j = i + 1 ; j < 4 ; ++j)
            {
                if(arr[i] != arr[j])
                {
                    unique = true;
                }else
                {
                    unique = false;
                    break;
                }
            }
            if(!unique)
                break;
        }
        if(unique)
            flag = true;
    }
    return num;
}
int main()
{
    int n ;
    cin>>n;
    cout<<check(n);
}
