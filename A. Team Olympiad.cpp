//
// Created by CST on 05-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int teams(int ctr1, int ctr2 , int ctr3 , int min)
{
    if(ctr1 <= ctr2)
    {
        min = ctr1;
        if(ctr1 <= ctr3)
            min = ctr1;
        else
            min = ctr3;
    }else
    {
        min = ctr2;
        if(ctr2 <= ctr3)
            min = ctr2;
        else
            min = ctr3;
    }
    return min;
}
int main()
{
    int n , ctr1 = 0 , ctr2 = 0 , ctr3 = 0 , min = 0;
    cin>>n;
    int arr[n];
    //to count how many ones , twos , threes
    for(int i  = 0 ; i < n ; ++i)
    {
        cin>>arr[i];
        if(arr[i] == 1)
        {
            ctr1++;
        }else if(arr[i] == 2)
        {
            ctr2++;
        }else
        {
            ctr3++;
        }
    }

    if(ctr1 == 0 || ctr2 == 0 || ctr3 == 0)
    {
        cout<<0;
        return 0;
    }

    min = teams(ctr1,  ctr2 , ctr3 , min);
    int s = 3 * min;
    int arr2[s] , ctr = 0 , teamCtr = 0;
    for (int j = 0; j < n; ++j){
        if(teamCtr < min)
        {
            if (arr[j] == 1)
            {
                arr2[ctr] = j + 1;
                ctr++;
                arr[j] = 0;
                for (int k = 0; k < n; ++k) {
                    if (arr[k] == 2) {
                        arr2[ctr] = k + 1;
                        ctr++;
                        arr[k] = 0;
                        for (int x = 0; x < n; ++x) {
                            if (arr[x] == 3) {
                                arr2[ctr] = x + 1;
                                ctr++;
                                arr[x] = 0;
                                break;
                            }
                        }
                        break;
                    }
                }
                teamCtr++;
            }
        }else
        {
            break;
        }
    }
    cout<<min<<endl;
    for(int i = 0 ; i < s ; ++i)
    {
        cout<<arr2[i]<<' ';
        if((i + 1) % 3 == 0)
            cout<<endl;
    }
}