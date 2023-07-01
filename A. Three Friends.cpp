//
// Created by CST on 30-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
#define esraa ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define el "\n"
#define ll long long
void solve()
{

    int arr[3];
    for(int i =0 ; i<3 ; i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+3);

    if(arr[0]==arr[1]&& arr[1]==arr[2])
    {
        cout << 0 << el;
        return ;
    }

    else if(arr[2]==arr[1])
    {
        arr[2]--;
        arr[1]--;
        arr[0]++;
    }else
    {
        if(arr[2]>arr[1])
        {
            arr[2]--;
        }
        if(arr[0] < arr[1])
        {
            arr[0]++;
        }

    }

    int x = abs(arr[0]-arr[1]) + abs(arr[1]-arr[2]) + abs(arr[2]-arr[0]);
    cout << x << el;

}
int main()
{
    int q ;
    cin >> q ;
    while(q--)
    {
        solve();
    }

}

